#include "search_algos.h"
#include <math.h>
#include <stdio.h>


/**
 * min - takes 2 ints return the minimun
 * @a: int
 * @b: int
 *
 * Return: int
 */
int min(int a, int b)
{
	return ((a < b) ? a : b);
}

/**
* jump_search - searches for a value in a sorted array
*   of integers using the Jump search algorithm
* @array: ptr->array of integers
* @size: array size
* @value: search key
*
* Note: add -lm (link math to gcc)
*
* Return: 1st occurence index || -1
*/
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size); /*block Jump size*/
	int prev = 0;

  /*finds the block where value*/
	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);

		if (prev >= (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
			return (-1);
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);

  /*Linear search in found block*/
	while (array[prev] < value)
	{
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
		prev++;

		if (prev == min(step, size))
			return (-1);
	}

	printf("Value checked array[%i] = [%i]\n", prev, array[prev]);

	if (array[prev] == value)
		return (prev);

	return (-1);
}
