#include "main.h"

/**
 * _strchr - locate a char in a string
 * @s: pointer to string to be searched
 * @c: search char
 * Return: NULL if notFound || c 1stOCC
 */
char *_strchr(char *s, char c)
{
	if (s == 0)
		return (0);

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (c);

	return (0);
}
