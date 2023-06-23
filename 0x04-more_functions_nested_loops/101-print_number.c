#include "main.h"

/**
 * print_number - return input number
 */
void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n / div > 9)
	{
		div *= 10;
	}
	while (div != 0)
	{
		int dig = n / div;
		_putchar('0' + dig);
		n %= div;
		div /=10;
	}
}
