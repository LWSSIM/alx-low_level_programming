#include "main.h"

/**
 * _puts - print input str to stdout
 * @str:pointer to input str
 */
void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
