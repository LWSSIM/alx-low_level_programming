#include "main.h"

/**
 * print_Type - print type of ELF file
 * @header: pointer to ELF header array
*/
void print_Type(Elf64_Ehdr *header)
{
	if (header->e_ident[EI_DATA] == ELFDATA2MSB)
		header->e_type >>= 8;

	printf("  Type:                              ");

	switch (header->e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_type);
	}
}

/**
 * print_elf_header_info - printer
 * @header: file
 * @fd: file descriptor
*/
void print_elf_header_info(Elf64_Ehdr *header, int fd)
{
	int i;
	uint8_t OSAbi;
	char *OSAbi_str = "Unknown";
	char *small = "2's complement, little endian";
	char *big = "2's complement, big endian";

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             ");
	printf("%s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              ");
	printf("%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? small : big);
	printf("  Version:                           ");
	printf("%d (current)\n", header->e_ident[EI_VERSION]);
	lseek(fd, EI_OSABI, SEEK_SET);
	if (read(fd, &OSAbi, sizeof(OSAbi)) != sizeof(OSAbi))
	{
		fprintf(stderr, "Error: Failed to read OS/ABI.\n");
		exit(1);
	}
	switch (OSAbi)
	{
		case ELFOSABI_SYSV:
			OSAbi_str = "UNIX - System V";
			break;
		case ELFOSABI_HPUX:
			OSAbi_str = "HP-UX";
			break;
	}
	printf("  OS/ABI:                            ");
	printf("%s\n", OSAbi_str);
	printf("  ABI Version:                       ");
	printf("%d\n", header->e_ident[EI_ABIVERSION]);
	print_Type(header);
	printf("  Entry point address:               ");
	printf("0x%lx\n", (unsigned long)header->e_entry);
}
/**
 * main - elf header printer program
 * @argc: ac
 * @argv: av
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{

	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error");
		exit(98);
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, ERROR_MSG);
		exit(98);
	}
	/*Check if it's a valid ELF file*/
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, ERROR_MSG);
		exit(98);
	}
	printf("ELF Header:\n");
	print_elf_header_info(&header, fd);
	close(fd);
	return (0);
}
