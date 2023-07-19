#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input str
 * @f: pointer to function f(char *)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
