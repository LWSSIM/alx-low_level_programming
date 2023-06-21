/* print from n to 98*/

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all naturals from n to 98
 *
 * @n: starting point
 *
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}

	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			
			if (i != 98)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
}

