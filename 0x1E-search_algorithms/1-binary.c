#include "search_algos.h"


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
	int i, low = 0, high = size - 1;
	int mid;


	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[high]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
