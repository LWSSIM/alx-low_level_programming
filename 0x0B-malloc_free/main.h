#ifndef MAIN_H
#define MAIN_H

/*putchar*/
int _putchar(char c);
/*create and init char array*/
char *create_array(unsigned int size, char c);
/*duplicate str*/
char *_strdup(char *str);
/*concate 2 strings*/
char *str_concat(char *s1, char *s2);
/*pointer to grid*/
int **alloc_grid(int width, int height);
/*free 2 dim array from alloc_grid*/
void free_grid(int **grid, int height);
/*concate args of ur program*/
char *argstostr(int ac, char **av);
#endif /*main.h*/
