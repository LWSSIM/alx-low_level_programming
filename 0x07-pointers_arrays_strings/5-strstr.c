#include "main.h"

/**
 * _strstr - locate substring needle, in string haystack
 * @haystack: pointer to str searched
 * @needle: pointer to substring to locate
 * Return: 0 || pointer to found needle occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (0);

	for  (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (&(haystack[i]));
		}
	}
	return (0);
}
