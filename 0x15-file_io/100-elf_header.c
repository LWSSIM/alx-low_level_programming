#include "main.h"

/**
* print_OSABI - print type of ELF file
* @header: pointer to ELF header array
*/
void print_OSABI(Elf64_Ehdr *header)
{
	printf("  OS/ABI:                            ");

	switch (header->e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
	}
}

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
* print_Entry - prints the entry values of ELF header
* @header: pointer to elf header array
*/
void print_Entry(Elf64_Ehdr *header)
{
	printf("  Entry point address:               ");

	if (header->e_ident[EI_DATA] == ELFDATA2MSB)
	{
		header->e_entry = ((header->e_entry << 8) & 0xFF00FF00) |
				((header->e_entry >> 8) & 0xFF00FF);
		header->e_entry = (header->e_entry << 16) |
		(header->e_entry >> 16);
	}
	if (header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)header->e_entry);

	else
		printf("%#lx\n", header->e_entry);
}
/**
* print_elf_header_info - printer
* @header: file
*/
void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	char *small = "2's complement, little endian";

	char *big = "2's complement, big endian";

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
	printf("\n");
	printf("  Class:                             ");
	printf("%s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              ");
	printf("%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? small : big);
	printf("  Version:                           ");
	printf("%d (current)\n", header->e_ident[EI_VERSION]);
	print_OSABI(header);
	printf("  ABI Version:                       ");
	printf("%d\n", header->e_ident[EI_ABIVERSION]);
	print_Type(header);
	print_Entry(header);
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
	print_elf_header_info(&header);
	close(fd);
	return (0);
}
