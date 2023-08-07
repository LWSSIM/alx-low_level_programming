#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

/*reads a text file & print to stdout*/
ssize_t read_textfile(const char *filename, size_t letters);

/*create a files*/
int create_file(const char *filename, char *text_content);

#endif /*MAIN_H*/
