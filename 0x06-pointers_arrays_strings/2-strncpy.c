#include "main.h"

/**
 * _strncpy - copy string
 * @dest:pointer to destination
 * @src:pointer to source
 * @n:nb of byte to not exceed
 * Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	for (; *src != '\0' && n > 0; ++src; --n)
	{
		*p = *src;
		++p;
	}
	if ( n == 0)
	{
		*p = '\0';
	}
	return (dest);
}
