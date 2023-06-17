/* print all single digit of base 10 */

#include <stdio.h>

/**
 * main - print base 10 digits
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
