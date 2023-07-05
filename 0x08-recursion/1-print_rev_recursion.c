#include "main.h"

/**
 * _print_rev_recursion - print str in rev
 * @s: pointer to input str
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
