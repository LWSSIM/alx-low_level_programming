#include "main.h"

/**
 * print_number - print input integer
 * @n:input integer
 */
void print_number(int n)
{
	int div = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / div >= 10)
	{
		div *= 10;
	}

	while (div > 0)
	{
		_putchar('0' + (n / div));
		n %= div;
		div /= 10;
	}
}
