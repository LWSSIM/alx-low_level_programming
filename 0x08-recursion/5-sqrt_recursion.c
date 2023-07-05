#include "main.h"

int sqrt_calc(int n, int s, int e);
/**
 * _sqrt_recursion - return natural squrt of input
 * @n: input
 * Return: -1 if natural sqrt not exist || result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n > 1 && n % 2 != 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_calc(n, 0, n));
}
/**
 * sqrt_calc - binary search to calc sqrt
 * @n:input
 * @s:start
 * @e:end
 * Return:results to sqrt recursion
 */
int sqrt_calc(int n, int s, int e)
{
	unsigned int mid = (s + e) / 2;

	if (s > e)
		return (e);
	if ((unsigned int)(mid * mid) == (unsigned int)n)
		return (mid);

	if ((unsigned int)mid * mid > (unsigned int(n)
		return (sqrt_calc(n, s, mid - 1));
	else
		return (sqrt_calc(n, mid + 1, e));
}
