#include "main.h"

/**
 * is_prime - calc prime
 * @n: input
 * @div: divsor
 * Return: 0 || 1
 */
int is_prime(int n, int div)
{
	if (div == 1)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime(n, div - 1));
}
/**
 * is_prime_number - check if input is prime
 * @n: input
 * Return: 1 || 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime(n, n - 1));
}
