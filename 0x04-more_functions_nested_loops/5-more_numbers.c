#include "main.h"

/**
 * more_numbers(void) - print 0-14 x10
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
