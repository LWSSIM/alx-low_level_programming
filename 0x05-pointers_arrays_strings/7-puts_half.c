#include "main.h"

/**
 * puts_half - print 2nd half of str
 * @str: pointer to input str
 */
void puts_half(char *str)
{
	int i = 0;
	int n, j;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;

	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}

	for (j = n; j <= i; j++)
	{
		_putchar(str[j]);

	}
	_putchar('\n');
}

