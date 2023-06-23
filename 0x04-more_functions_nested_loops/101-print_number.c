#include "main.h"

/**
 * print_number - prints input num
 * @num: input
 */
void print_number(int num)
{
	unsigned int temp = num;
	unsigned int divisor = 1;
	unsigned int digitCount = 1;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	while (temp /= 10)
	{
	digitCount++;
	}

	while (--digitCount)
	{
	divisor *= 10;
	}

	while (divisor != 0)
	{
		unsigned int digit = num / divisor;

		_putchar('0' + digit);
		num %= divisor;
	divisor /= 10;
	}
}
