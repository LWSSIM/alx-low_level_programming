#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer to input str
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
	return;
}