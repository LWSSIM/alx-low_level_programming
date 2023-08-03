#ifndef MAIN_H
#define MAIN_H

/*convert binary to u-int*/
unsigned int binary_to_uint(const char *b);

/*print binary of a number*/
void print_binary(unsigned long int n);

/*return bit vlaue at index*/
int get_bit(unsigned long int n, unsigned int index);

/*set the value at a given index to 1*/
int set_bit(unsigned long int *n, unsigned int index);

/*clear value at certain bit*/
int clear_bit(unsigned long int *n, unsigned int index);

/*calculate needed number to flip n to m*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/*check endianness*/
int get_endianness(void);

/*putchar*/
int _putchar(char c);
#endif /*MAIN_H*/
