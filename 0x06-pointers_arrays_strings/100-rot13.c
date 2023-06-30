#include "main.h"

/**
 * rot13 - encode input string with rot13
 * @s: input string
 * Return: s `encoded`
 */
char *rot13(char *s)
{
	char *p = s;
	char c = *p;

	while (*p)
	{
		c = *p;

		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			c += 13;
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
			c -= 13;

		*p = c;
		p++;
	}
	return (s);
}
