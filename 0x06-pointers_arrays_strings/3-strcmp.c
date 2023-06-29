#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1:string 1
 * @s2:string 2
 * Return: - || 0 || + if < || == || >
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
