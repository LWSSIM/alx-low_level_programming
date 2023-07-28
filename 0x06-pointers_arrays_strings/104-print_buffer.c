#include <stdio.h>

/**
 * print_buffer - print the content of a buffer
 * @b: buffer pointer
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		/* Print hexadecimal content (2 chars) of the buffer, 2 bytes at a time */
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", b[j]);
			else
				printf("  "); /* Print spaces for empty spaces in the last line */
			if (j % 2 == 1)
				putchar(' '); /* Separate every two bytes with a space */
		}
		putchar(' ');
		/* Print the content of the buffer as printable characters or '.' */
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (b[j] >= 32 && b[j] <= 126) /* Printable characters are in this range */
					putchar(b[j]);
				else
					putchar('.'); /* Non-printable characters are displayed as '.' */
			}
			else
			{
				putchar(' '); /* Print spaces for empty spaces in the last line */
			}
		}
		putchar('\n');
	}
}
