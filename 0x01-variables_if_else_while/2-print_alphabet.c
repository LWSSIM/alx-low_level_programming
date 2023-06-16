/* This program use ASCII to putchar {a..z}*/

#include <stdio.h>

/**
 * main - print letters {a..z} +\n
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar((char)i);
	}
	putchar('\n');

	return 0;
}
