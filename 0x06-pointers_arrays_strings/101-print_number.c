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
		x = -n;
	}
	else
	{
		x = n;
	}

	if ((x / 10) > 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
