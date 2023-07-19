#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - exec the fn ptr parameter over array elmnts
 * @array: input array
 * @size: array size
 * @action: pointer to the fn to be exec
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
