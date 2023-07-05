#include "main.h"

/**
 * _strlen_recursion - returns str lenth -\0
 * @s: pointer to input str
 * Return: 0 || length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
