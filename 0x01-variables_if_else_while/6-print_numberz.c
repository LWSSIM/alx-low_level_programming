/* print 0 to 9 using int type */

#include <stdio.h>

/**
 * main - putchar single digits #10 type !=char
 *
 * Return:0
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
