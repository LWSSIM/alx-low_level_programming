#include "main.h"

/**
 * print_number - prints input num
 * @n: input
 */
void print_number(int n)
{
	unsigned int x, div, dig;

	if (n < 0)
	{
		_putchar('-');
		x = n * -1;
	}
	else
	{
		x = n;
	}

	div = x;
	dig = 1;

	while (div > 9)
	{
		div /= 10;
		dig *= 10;
	}

	for (; dig >= 1; dig /= 10)
	{
		_putchar(((x / dig) % 10) + '0');
	}
}
