#include "main.h"

/**
 * _isupper - check if char is uppercase
 * @c: checked input
 * Return: 1 if c upper else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
