#include "main.h"

/**
 * leet - encode a str with leet(1337)
 * @s: string to encode
 * Return: emcoded string
 */
char *leet(char *s)
{
	int i, j;
	char *letter = "aAeEoOtTlL";
	char *leet = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] == leet[j];
			}
		}
	}

	return (s);
}
