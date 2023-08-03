#ifndef MAIN_H
#define MAIN_H

/*convert binary to u-int*/
unsigned int binary_to_uint(const char *b);

/*print binary of a number*/
void print_binary(unsigned long int n);

/*return bit vlaue at index*/
int get_bit(unsigned long int n, unsigned int index);

/*putchar*/
int _putchar(char c);
#endif /*MAIN_H*/
