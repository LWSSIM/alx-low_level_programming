#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of ints
 * @a:array pointer
 * @n:number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
