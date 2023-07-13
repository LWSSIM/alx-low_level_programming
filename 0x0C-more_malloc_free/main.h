#ifndef MAIN_H
#define MAIN_H

/*_putchar*/
int _putchar(char c);

/*allocate mem w/malloc*/
void *malloc_checked(unsigned int b);
/*concat 2 str*/
char *string_nconcat(char *s1, char *s2, unsigned int n);
/*allocate mem set to 0*/
void *_calloc(unsigned int nmemb, unsigned int size);

#endif
