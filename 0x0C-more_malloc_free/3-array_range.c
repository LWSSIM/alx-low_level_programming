#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of int range
 * @min: min int
 * @max: max int
 * Return: ptr to array | NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int len, i;

	if (min > max)
		return (0);
	len = max - min + 1;
	ptr = malloc(len * sizeof(int));

	if (ptr == 0)
		return (0);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}

