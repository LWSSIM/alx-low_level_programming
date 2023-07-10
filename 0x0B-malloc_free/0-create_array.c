#include "main.h"
#include <stdlib.h>

/**
 * create_array - of chars, + init with specific char
 * @size: of aray
 * @c: init char
 * Return: pointer to arrays 1st address || NULL if size=0/fail
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
		return (0);

	p = malloc(size * sizeof(char));
	if (p == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
