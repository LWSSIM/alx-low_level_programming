#include "main.h"

/**
 * _strchar - locate a char in a string
 * @s: pointer to string to be searched
 * @c: search char
 * Return: NULL if notFound || c 1stOCC
 */
char *_strchr(char *s, char c)
{
	char *ps = s;

	while (*ps != c || *ps == '\0')
	{
		ps++;
	}
	if (*ps == '\0')
		return (0);
	else
		return (ps);
}
