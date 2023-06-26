#include "main.h"

/**
 * puts2 - print every other char of  a str
 * @str: pointer to input str
 */
void puts2(char *str)
{
	char *p = str;
	int length = 0;

	while (*p !='\0')
	{
		p++;
		length++;
	}

	p = str;

	while (length > 0)
	{
		_putchar(*p);
		p += 2;
		length -= 2;
	}
	_putchar('\n');
}
