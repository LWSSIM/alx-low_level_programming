#include "main.h"

/**
 * print_binary - print binary of a number
 * @n: passsed U_long_int
 */
void print_binary(unsigned long int n)
{
	int i, num_bit, lead_zero;

	num_bit = sizeof(unsigned long int) * 8;/*n of bits in this type*/
	lead_zero = 1; /*flagto track zeros*/

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = num_bit - 1; i >= 0; i--)
	{
		unsigned long mask = 1ul << i;
		/*creat mask with 1 bit set to 1 in place*/

		if (n & mask)
		{
			_putchar('1');
			lead_zero = 0;/*no more leading 0s*/
		}
		else if (!lead_zero)
		{
			_putchar('0');
		}
	}
}
