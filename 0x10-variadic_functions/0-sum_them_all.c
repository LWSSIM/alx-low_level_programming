#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - summ all arguments
 * @n: 1st arg
 * Return: result || 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int res;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	res = 0;
	for (i = 0; i < n; i++)
	{
		res += va_arg(args, int);
	}
	va_end(args);

	return (res);
}
