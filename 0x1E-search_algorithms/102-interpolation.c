#include "search_algos.h"


/**
 * interpolation_search -  searches for a value in a sorted array
 *  of integers using the Interpolation search algorithm
 * @array: ptr->array of integers
 * @size: array size
 * @value: search key
 *
 * Return: 1st occurence index || -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (size - 1);
	size_t pos;

	if (!array)
		return (-1);

	pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	/*out of range value*/
	if ((int)pos > high)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	return (-1);
}
