#ifndef MAIN_H
#define MAIN_H

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

#endif
