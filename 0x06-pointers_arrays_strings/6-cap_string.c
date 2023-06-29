#include "main.h"

/**
 * cap - capitalize all words of string
 * @str: string to update
 * Return: updated str
 */
char *cap_string(char *str)
{
	char *p = str;
	int cap_n = 1;

	if (str == 0)
		return (0);

	while (*p != '\0')
	{
		if (*p == ' ' || *p == '\t' || *p == '\n'
			|| *p == ',' || *p == ';' || *p == '.'
			|| *p == '!' || *p == '?' || *p == '"'
			|| *p == '(' || *p == ')' || *p == '{'
			|| *p == '}')
		{
			cap_n = 1;
		}

		else if ( cap_n && *p >= 'a' && *p <= 'z')
		{
			*p = *p - ('a' - 'A');
			cap_n = 0;
		}
		else
		{
			cap_n = 0;
		}

		p++;
	}

	return (str);
}
