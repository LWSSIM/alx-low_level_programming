#include "main.h"

/**
 * print_number - prints input num
 * @num: input
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
		m = n
	}

	div = m;
	dig = 1;

	while (div > 9)
	{
		div /= 10;
		dig *= 10;
	}

	for (; dig >= 1; dig /=10)
	{
		_putchar(((x / dig) % 10) + '0');
	}
}
