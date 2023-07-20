#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print any passed args based on format specifier
 * @fomrat: const ptr to type specifier
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int n;
	float f;
	char c;
	unsigned int i;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				n = va_arg(args, int);
				printf("%i", n);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
		}
		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");

		i++;
	}
	va_end(args);
	printf("\n");
}
