#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
int _putchar(char c);

/*prints a name*/
void print_name(char *name, void (*f)(char *));

/*exec a parameter function on each array i*/
void array_iterator(int *array, size_t size, void (*action)(int));

/*search for an int within array return index*/
int int_index(int *array, int size, int (*cmp)(int));

#endif /*FUNCTION_POINTERS.H*/
