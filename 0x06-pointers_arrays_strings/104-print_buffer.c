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

	i = 0;
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j++)/*print hex 2chars of buff*/
		{
			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  ");
			if (j % 2 == 1)
                                putchar(' ');
		}

		for (j = i; j < i + 10; j++) /*print chars*/
		{
			if (j < size)
			{
				if (b[j] >= 32 && b[j] <= 126)
					putchar(b[j]);
				else
					putchar('.');
			}
			else
				putchar(' ');
		}
		putchar('\n');
	}
}
