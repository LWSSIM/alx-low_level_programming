#ifndef MAIN_H
#define MAIN_H

/*_Putchar*/
int _putchar(char c);

/* append 2 strings*/
char *_strcat(char *dest, char *src);

/*append n byte*/
char *_strncat(char *dest, char *src, int n);

/*coppy string n bytes*/
char *_strncpy(char *dest, char *src, int n);

/*compare 2 strings*/
int _strcmp(char *s1, char *s2);

/*reverse array of int content*/
void reverse_array(int *a, int n);

/*lowcase to uppcase in str*/
char *string_toupper(char *);

/*Capitalizes string*/
char *cap_string(char *);

/*encode str to 1337*/
char *leet(char *);

/*encode str to rot13*/
char *rot13(char *);

/*print an int*/
void print_number(int n);

/*add 2 numbers*/
char *infinite_add(char *n1, char *n2, char *r, int size_r);




#endif
