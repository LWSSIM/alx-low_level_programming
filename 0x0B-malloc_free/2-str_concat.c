#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concat 2 str
 * @s1: 1st str
 * @s2: 2nd str
 * Return: ptr to s1 || NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int z1, z2, i, j;

	z1 = 0, z2 = 0;

	while (s1 != 0 && s1[z1] != '\0')
		z1++;
	while (s2 != 0 && s2[z2] != '\0')
		z2++;

	p = malloc(sizeof(char) * (z1 + z2 + 1));

	if (p == 0)
		return (0);

	for (i = 0; i < z1 && s1 != 0; i++)
		p[i] = s2[i];

	for (j = 0; j < z2 && s2 != 0; j++)
		p[z1 + j] = s2[j];

	p[z1 + z2] = '\0';

	return (p);
	free (p);
}
