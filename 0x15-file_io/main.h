#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*reads a text file & print to stdout*/
ssize_t read_textfile(const char *filename, size_t letters);


#endif /*MAIN_H*/
