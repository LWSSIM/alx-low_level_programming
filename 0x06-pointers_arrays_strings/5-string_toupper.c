#include "main.h"

/**
 * string_toupper - convert lowercase to upper in string
 * Return: updated string
 */
char *string_toupper(char *str)
{
	if (str == NULL)
		return NULL;

	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - ('a' - 'A');
		}
		p++;
	}
	return (str);
}
