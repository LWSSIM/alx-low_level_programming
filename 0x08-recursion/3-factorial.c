#include "main.h"

/**
 * factorial - calc and return factorial of input
 * @n: input
 * Return: -1 <- n<0 || factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}
