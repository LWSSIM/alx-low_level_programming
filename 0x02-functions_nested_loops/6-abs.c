/* absolut value of an int*/

#include "main.h"

/**
 * _abs - return absolute value on an int
 *
 * @n: number to be converted to absolute
 *
 * Return: |n|
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
