/* print 9 times table*/

#include "main.h"

/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int ij = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (ij < 10)
			{
				_putchar(' ');
				_putchar(ij + '0');
			}
			else
			{
				_putchar((ij / 10) + '0');
				_putchar((ij % 10) + '0');
			}

			if (j == 9 && i == 9)
			{
				break;
			}
		}

		_putchar('\n');
	}
}
