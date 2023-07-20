#ifndef MAIN_H
#define MAIN_H

/*prints single char*/
int _putchar(char c);

/*return sum of all parametres*/
int sum_them_all(const unsigned int n, ...);

/*print numbers in parameters*/
void print_numbers(const char *separator, const unsigned int n, ...);

/*print strings*/
void print_strings(const char *separator, const unsigned int n, ...);

/*print anything*/
void print_all(const char * const format, ...);

#endif /*MAIN_H*/
