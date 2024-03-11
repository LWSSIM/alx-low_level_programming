#include <stdio.h>
#include "search_algos.h"


/**
 * linear_search - searches for a value in an array
 *  of integers using the Linear search algorithm
 * @array: ptr->target_array
 * @size: size of the array
 * @value: search value
 *
 * Return: Index of $value || -1 == not_found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
