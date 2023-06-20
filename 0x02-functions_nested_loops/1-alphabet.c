/* print the aplhabet*/
#include "main.h"

/**
 * print_alphabet - print [a..z](with _putcahr)
 */
void print_alphabet(void)
{
	char x[] = {"abcdefghijklmnopqrstuvwxyz"};
	int i;

	for (i = 0; i < (int)sizeof(x); i++)
	{
		_putchar(x[i]);
	}

	_putchar('\n');
}
