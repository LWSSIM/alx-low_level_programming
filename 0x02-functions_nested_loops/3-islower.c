/*function: check is char is lowercase*/

#include "main.h"

/**
 * _islower - check if a char is lower
 *
 * @c: char to be checked 
 *
 * Return: 1 == lower || 0 != lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
