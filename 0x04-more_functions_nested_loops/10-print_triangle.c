#include "main.h"

/**
 * print_triangle - with base input
 * @size: input
 */
void print_triangle(int size)
{
	int i, j, x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			x = size - i;

			for (j = 0; j < x; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
