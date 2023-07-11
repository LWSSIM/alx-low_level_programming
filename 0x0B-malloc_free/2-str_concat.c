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

	if (s1 == 0)
		s1 = "";
	else if (s2 == 0)
		s2 = "";

	z1 = strlen(s1);
	z2 = strlen(s2);

	p = malloc(sizeof(char) * (z1 + z2 + 1));

	if (p == 0)
	for (i = 0; i < z1; i++)
		p[i] = s2[i];
	for (j = 0; j < z2; j++)
		p[i++] = s2[j];

	p[i] = '\0';

	return (p);
}
