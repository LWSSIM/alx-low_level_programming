#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - print numbers passed
 * @separator: str to be printed between occurencens
 * @n: nb of integers paased
 */
void print_numbers(const char *separator, const unsigned n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
		exit(1);

	va_start(args, n);
	
	for (i = 0; i < n; i++)
	{
		if (separator && i != n - 1)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
	}
	va_end(args);
	_putchar('\n');
}
