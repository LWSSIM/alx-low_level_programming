#include "main.h"

/**
 * _memcpy - copies n bytes from src(mem/area) to dest
 * @dest: write destination memory area
 * @src: copy memory area
 * @n: number of bytes from src
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p1 = dest;
	char *p2 = src;
	unsigned int i = 0;

	while (i < n)
	{
		*p1++ = *p2++;
		i++;
	}
	return (dest);
}
