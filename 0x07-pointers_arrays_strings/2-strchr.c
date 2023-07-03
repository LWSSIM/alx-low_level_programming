#include "main.h"

/**
 * _strchr - locate a char in a string
 * @s: pointer to string to be searched
 * @c: search char
 * Return: NULL if notFound || c 1stOCC
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
		return ('\0');
}
