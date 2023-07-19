#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: input array
 * @size: array size
 * @cmp: fn pnt to compare values
 * Return: index of 1st elmnt<-(cmp != 0) || -1<-(no elmt match || size<=0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0 || array == 0 || cmp == 0)
		return (-1);

	i = 0;
	while (i < (unsigned int)size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
