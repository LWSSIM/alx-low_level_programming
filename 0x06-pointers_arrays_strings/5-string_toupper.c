#include "main.h"

/**
 * string_toupper - convert lowercase to upper in string
 * @str: input str
 * Return: updated string
 */
char *string_toupper(char *str)
{
	char *p = str;

	if (str == 0)
		return (0);

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
