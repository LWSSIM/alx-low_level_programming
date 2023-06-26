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

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);

}
