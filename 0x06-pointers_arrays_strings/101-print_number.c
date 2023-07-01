#include "main.h"

/**
 * print_number - print input integer
 * @n:input integer
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n > 0)
	{
		if ((n / 10) > 0)
		{
			print_number(n / 10);
		}
		_putchar((n % 10) + '0');
	}
}
