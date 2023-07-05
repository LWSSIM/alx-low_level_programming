#include "main.h"

int sqrt_calc(int n, unsigned long s, unsigned long e);
/**
 * _sqrt_recursion - return natural squrt of input
 * @n: input
 * Return: -1 if natural sqrt not exist || result
 */

int _sqrt_recursion(int n)
{
	int res;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	res = (sqrt_calc(n, 0, n));
	if ((res * res) == n)
		return (res);
	else
		return (-1);
}
/**
 * sqrt_calc - binary search to calc sqrt
 * @n:input
 * @s:start
 * @e:end
 * Return:results to sqrt recursion
 */
int sqrt_calc(int n, unsigned long s, unsigned long e)
{
	unsigned long mid = (s + e) / 2;

	if (s > e)
		return (e);
	if ((mid * mid) == (unsigned long)n)
		return (mid);

	if (mid * mid > (unsigned long)n)
		return (sqrt_calc(n, s, mid - 1));
	else
		return (sqrt_calc(n, mid + 1, e));
}
