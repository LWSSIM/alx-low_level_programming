#include "main.h"

void print_elf_header_info(Elf64_Ehdr *header, int fd)
{

    int i;
    uint8_t OSAbi;
    uint16_t type;
    char *OSAbi_str = "Unknown", *type_str = "Unknown";

    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("Class:                              %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("Data:                               %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                            %d (current)\n", header->e_ident[EI_VERSION]);
    lseek(fd, EI_OSABI,SEEK_SET);
    if (read(fd, &OSAbi, sizeof(OSAbi)) != sizeof(OSAbi))
    {
        fprintf(stderr, "Error: Failed to read OS/ABI.\n");
        return;
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
    printf("OS/ABI:                             %s\n", OSAbi_str);
    printf("ABI Version:                        %d\n", header->e_ident[EI_ABIVERSION]);
    lseek(fd, EI_PAD + 4, SEEK_CUR);
    if (read(fd, &type, sizeof(type)) != sizeof(type))
    {

        fprintf(stderr, "Error: Failed to read Type.\n");
        return;
    }
    switch (type) 
    {
        case ET_NONE:
            type_str = "None";
            break;
        case ET_REL:
            type_str = "Relocatable";
            break;
        case ET_EXEC:
            type_str = "Executable";
            break;
        case ET_DYN:
            type_str = "Shared Object";
            break;
        case ET_CORE:
            type_str = "Core";
            break;
    }
    printf("Type:                               %s\n", type_str);
    printf("Entry point address:                0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{

    int fd;
    Elf64_Ehdr header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 1;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error");
        return 98;
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        fprintf(stderr, ERROR_MSG);
        return 98;
    }

    /*Check if it's a valid ELF file*/
    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, ERROR_MSG);
        return 98;
    }

    print_elf_header_info(&header, fd);

    close(fd);
    return 0;
}
