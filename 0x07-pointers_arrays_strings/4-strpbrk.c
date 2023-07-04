#include "main.h"

/**
 * _strpbrk - search str for any of a set of bytes
 * @s: searched string
 * @accept: set of accepted bytes
 * Return: pointer to the matching byte in s || NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				if (s[i] == accept[j])
					return (&(s[i]));
			}
		}
	}
	return (0);
}
