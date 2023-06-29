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

	while (n > 0 && *src != '\0')
	{
		*p++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*p++  = '\0';
		n--;
	}
	return (dest);
}
