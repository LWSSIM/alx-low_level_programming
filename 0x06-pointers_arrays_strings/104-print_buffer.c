#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: ptr to mem chunck
 * @size: bytes to be printed from chuck
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
		putchar('\n');

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		/*print hex 2chars of buff*/
		for (j = i; j < i + 10 && j < size; j++)
		{
			printf("%02x", b[j]);

			if (j % 2 == 1)
				putchar(' ');
		}

		for (; j < i + 10; j++)
		{
			printf("  ");
			if (j % 2 == 1)
				putchar(' ');
		}
		putchar(' ');

		for (j = i; j < i + 10 && j < size; j++) /*print chars*/
		{
			if (b[j] >= 32 && b[j] <= 126)
				putchar(b[j]);
			else
				putchar('.');
		}
		putchar('\n');
	}
}

