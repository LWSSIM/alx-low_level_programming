#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate mem for array / set to 0
 * @nmemb: number of array elements
 * @size: size of nmemb
 * Return: ptr to to allocated mem || NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *bp;
	unsigned int tot, i;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);

	bp = ptr;
	tot = nmemb * size;
	for (i = 0; i < tot; i++)
		bp[i] = 0;
	return (ptr);
}
