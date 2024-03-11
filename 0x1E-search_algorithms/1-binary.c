#include <stdio.h>
#include "search_algos.h"


/**
 * binary_recursion - applies the recursive logic
 * @array: ptr->target_array
 * @low: lowest new index
 * @high: highest new index
 * @value: search (value)
 *
 * Return: Index of $value || -1 == not_found
 */
int binary_recursion(int *array, int low, int high, int value)
{
	int mid = low + (high - low) / 2, i;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[high]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			return (binary_recursion(array, mid + 1, high, value));
		else
			return (binary_recursion(array, low, mid - 1, value));
	}
	return (-1);
}

/**
 * binary_search - searches for a value in a sorted array
 *  of integers using the Binary search algorithm
 * @array: ptr->target_array
 * @size: size of the array
 * @value: search (value)
 *
 * Return: Index of $value || -1 == not_found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_recursion(array, 0, size - 1, value));
}
