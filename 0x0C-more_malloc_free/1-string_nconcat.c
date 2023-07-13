#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concat 2 strs
 * @s1:1st str
 * @s2:2nd str
 * n: 1st n bytes of s2
 * Return: ptr to mem_space(s1+n(s2)) || NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int z1, z2, i, j;

	for (z1 = 0; s1 != 0 && s1[z1] != '\0'; z1++)
		;
	for (z2 = 0; s2 != 0 && s2[z2] != '\0'; z2++)
		;

	if (n >= z2)
	{
		ptr = malloc(sizeof(char) * (z1 + z2 + 1));
	}
	else if (n < z2)
	{
		ptr = malloc(sizeof(char) * (z1 + n + 1));
	}
	if (ptr == 0)
		return (0);

	for (i = 0; i < z1 && s1 != 0; i++)
		ptr[i] = s1[i];
	if (n >= z2)
	{
		for (j = 0; j < z2 && s2 != 0; j++)
			ptr[z1 + j] = s2[j];
		ptr[z1 + z2] = '\0';
	}
	else if (n < z2)
	{
		for (j = 0; j < n && s2 != 0; j++)
			ptr[z1 + j] = s2[j];
		ptr[z1 + n] = '\0';
	}
	return (ptr);
}
