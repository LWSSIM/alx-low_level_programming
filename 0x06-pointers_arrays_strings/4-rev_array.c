#include "main.h"

/**
 * reverse_array - <= of integers
 * @a:array pointer
 * @n:array length
 */
void reverse_array(int *a, int n)
{
	int *s = a;
	int *p = a + n;
	int tmp;

	while (s < p)
	{
		tmp = *s;
		*s = *p;
		*p = tmp;
		a++;
		p--;
	}
}
