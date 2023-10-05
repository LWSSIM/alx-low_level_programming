#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <elf.h>
#include <sys/stat.h>

#define ERROR_MSG "Error: Not a valid ELF file.\n"

/*reads a text file & print to stdout*/
ssize_t read_textfile(const char *filename, size_t letters);

/*create a files*/
int create_file(const char *filename, char *text_content);

/*append text to eof*/
int append_text_to_file(const char *filename, char *text_content);

/*elf data printer*/
void print_elf_header_info(Elf64_Ehdr *header);

/*print OSABI data*/
void print_OSABI(Elf64_Ehdr *header);

/*print type*/
void print_Type(Elf64_Ehdr *header);

/*print entry value of elf header*/
void print_Entry(Elf64_Ehdr *header);

/*elf executable fun*/
int main(int argc, char *argv[]);
#endif /*MAIN_H*/
