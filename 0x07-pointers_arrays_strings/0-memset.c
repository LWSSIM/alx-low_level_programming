#include "main.h"

/**
 * _memset - copy a cte over n bytes of memory in s adress
 * @s: pointer to string
 * @b: cte input to be coppied
 * @n number of bytes to fill with cte(b)
 * Return: s pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (*s);
}
