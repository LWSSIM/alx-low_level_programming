#include "main.h"

/**
 * reverse_array - <= of integers
 * @a:array pointer
 * @n:array length
 */
void reverse_array(int *a, int n)
{
	int s = 0;
	int e = n - 1;

	while (s < e)
	{
		int tmp;

		tmp = a[s];
		a[s] = a[e];
		a[e] = tmp;
		s++;
		e--;
	}
}
