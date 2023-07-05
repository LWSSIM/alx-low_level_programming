#include "main.h"

/**
 * _pow_recursion - calculate x^y
 * @x: integer
 * @y: exponent
 * Return: x^y || -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
