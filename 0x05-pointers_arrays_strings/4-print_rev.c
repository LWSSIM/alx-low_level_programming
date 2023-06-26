#include "main.h"

/**
 * print_rev - print reversed str
 * @s: pointer to input str
 */
void print_rev(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++; /* move pointer to the end of str*/
	}

	p--; /*accounts for '\0'*/
	while (p >= s) /* s is the original 1st adress*/
	{
		_putchar(*p);
		p--;
	}
	_putchar('\n');
}
