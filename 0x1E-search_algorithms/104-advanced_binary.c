#include "search_algos.h"


/**
 * advanced_binary_recursice - recursive function
 *
 * @array: array
 * @low: low
 * @high: high
 * @value: value
 *
 * Return: index if found and -1 if not
 */
int advanced_binary_recursice(int *array, int low, int high, int value)
{
	int mid = (high + low) / 2;
	int i;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
			else
				printf("\n");
		}
		if (array[mid] > value)
			return (advanced_binary_recursice(array, low, mid, value));
		else if (array[mid] < value)
			return (advanced_binary_recursice(array, mid + 1, high, value));
		else if (array[mid] == value && array[mid - 1] == value)
			return (advanced_binary_recursice(array, low, mid, value));
		else if (array[mid] == value)
			return (mid);
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorith
 *
 * @array: array
 * @size: size
 * @value: value
 *
 * Return: index if found and -1 if not
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (advanced_binary_recursice(array, 0, size - 1, value));
}
