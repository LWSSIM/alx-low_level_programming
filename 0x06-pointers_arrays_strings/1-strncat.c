#include "main.h"

/**
 * _strncat - cat n bytes from src to dest
 * @dest: pointer to destitation
 * @src: pointer to source
 * @n: nb of bytes at most to be used from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		++p;
	}
	for (; n > 0 && *src != '\0'; ++src; --n)
	{
		*p = *src;
		++p;
	}
	if (n == 0)
	{
		*p = '\0';
		break;
	}
	return (dest);
}
