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
		for (j = 0; j < 10; j++)
		{
			if (j <= size - i - 1)
				printf("%02x", b[j]);
			else
				printf("  ");
			if (j % 2 == 1)
				putchar(' ');
		}
		putchar(' ');

		for (j = 0; j <  10 && i + j < size; j++) /*print chars*/
		{
			if (b[j + i] >= 32 && b[i + j] <= 126)
				putchar(b[j + i]);
			else
				putchar('.');
		}
		putchar('\n');
	}
}
