#include "main.h"

/**
 * print_number - print input integer
 * @n:input integer
 */
void print_number(int n)
{
	unsigned int x;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}

	if ((m / 10) > 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
