#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concat args of a program
 * @ac: arg counter
 * @av: arg vector
 * Return: pointer to str
 */
char *argstostr(int ac, char **av)
{
	int i, j, c, l;
	char *p;

	if (ac == 0 || av == 0)
		return (0);

	for (i = 0, l = 0; i < ac; l++, i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++);
	}
	p = (char *)malloc((sizeof(char) * l) + 1);
	if (p == 0)
		return (0);

	for (i = 0, c = 0; i < ac; i++, c++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
			p[c] = av[i][j];
		p[c] = '\n';
	}
	p[c] = '\0';
	return (p);
}
