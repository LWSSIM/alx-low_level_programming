/* print n times table */

#include "main.h"

/**
 * print_times_table - nested loops to print n * table
 *
 * @n: number to be multiplied
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int c = i * j;
				if (j != 0)
				{
					if (c < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (c < 100)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						_putchar(' ');
					}
				}
				if (c < 10)
				{
					_putchar(c + '0');
				}
				else if (c < 100)
				{
					_putchar((c / 10) + '0');
					_putchar(c % 10 + '0');
				}
				else
				{
					_putchar((c / 100) + '0');
					_putchar((c / 10) % 10 + '0');
					_putchar (c % 10 + '0');
				}
				if (j != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
}
