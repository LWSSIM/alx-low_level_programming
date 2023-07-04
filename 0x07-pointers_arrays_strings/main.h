#ifndef MAIN_H
#define MAIN_H

/*_putchar*/
int _putchar(char c);

/*fills memory with cte byte*/
char *_memset(char *s, char b, unsigned int n);

/*copies memory area*/
char *_memcpy(char *dest, char *src, unsigned int n);

/*locate a char in a string*/
char *_strchr(char *s, char c);

/*get the lenght of a prefix substring*/
unsigned int _strspn(char *s, char *accept);

/*search string for set of bytes*/
char *_strpbrk(char *s, char *accept);

/*locate sub string*/
char *_strstr(char *haystack, char *needle);

/*print the chessboard*/
void print_chessboard(char (*a)[8]);

/*print sum of the 2 diagonals of a square matrix of integers*/
void print_diagsums(int *a, int size);

/*function that sets the value of a pointer to a char*/
void set_string(char **s, char *to);
#endif
