/*Prints alphabet x10*/

#include "main.h"

/**
 * print_alphabet_x10 - print {a..z} x10\n using _putchar.c
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
	
		}
		_putchar('\n');

		i++;
	}
}
