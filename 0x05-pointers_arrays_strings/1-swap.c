#include "main.h"

/**
 * swap_int - swap the value of 2 integers
 * @a:1st input int
 * @b:2nd input int
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
