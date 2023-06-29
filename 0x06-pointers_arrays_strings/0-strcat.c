#include "main.h"

/**
 * _strcat -  append 2 strings
 * @dest: pointer to storring adress
 * @scr: pointer to source adress
 *
 * Return: appended str
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
		++p;

	while (*src != '\0')
	{
		*p = *src;
		++p;
		++src;
	}
	*p = '\0';

	return (dest);
}
