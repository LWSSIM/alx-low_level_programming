#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1:string 1
 * @s2:string 2
 * Return: - || 0 || + if < || == || >
 */
int _strcmp(char *s1, char *s2)
{
	while (*str1 != '\0' && *str1 == *str2)
	{
		str1++;
		str2++;
	}

	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
