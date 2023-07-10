#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate str to new allocated memory space
 * @str: pointer to input string
 * Return: pointer to new memory space && NULL if str = null
 */
char *_strdup(char *str)
{
	char *p;
	int i, size;

	if (str == 0)
		return (0);

	size = 0;
	while (str[size] != '\0')
		size++;

	p = malloc(sizeof(char) * (size + 1));
	if (p == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		p[i] = str[i];
	}
	p[size] = '\0';
	return (p);
}
