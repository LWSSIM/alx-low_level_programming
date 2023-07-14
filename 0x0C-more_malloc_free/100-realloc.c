#include "main.h"
#include <stdlib.h>

/**
 * _realloc - using malloc / free
 * @ptr: to old mem block
 * @old_size: in bytes
 * @new_size: in bytes
 * Return: NULL || ptr || new_ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size, i;
	unsigned char *ptr_byte, *new_ptr_byte;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == 0)
		return (malloc(new_size));
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == 0)
		return (0);

	min_size = (old_size < new_size) ? old_size : new_size;
	ptr_byte = (unsigned char *)ptr;
	new_ptr_byte = (unsigned char *)new_ptr;
	for (i = 0; i < min_size; i++)
		new_ptr_byte[i] = ptr_byte[i];

	free(ptr);
	return (new_ptr);
}
