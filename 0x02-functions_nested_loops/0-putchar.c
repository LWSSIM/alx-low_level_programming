/* prints a char no std header*/

#include "main.h"

/**
 * main - print char
 * Return: 0(ok)
 */
int main(void)
{
	int i;
	char x[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0; i < 8; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
