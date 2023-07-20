#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * c_fun - print char
 * @args: list of arguments
 */
void c_fun(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * i_fun - print int
 * @args: arguments
 */
void i_fun(va_list args)
{
	printf("%i", va_arg(args, int));
}
/**
 * s_fun - print str
 * @args: args
 */
void s_fun(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	switch (s == NULL)
	{
		case 1:
			s = "(nil)";
			break;
		default:
			break;
	}
	printf("%s", s);
}
/**
 * f_fun - print float
 * @args: args
 */
void f_fun(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_all - print any passed args based on format specifier
 * @fomrat: const ptr to type specifier
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	f_list f_print[] = {
		{'c', c_fun},
		{'i', i_fun},
		{'s', s_fun},
		{'f', f_fun}
	};

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{	
		j = 0;
		while (f_print[j].flag)
		{
			if (format[i] == f_print[j].flag)
			{
				f_print[j].f(args);
				if (format[i + 1])
					printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

