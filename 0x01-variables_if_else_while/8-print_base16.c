/* print all hexadecimal numbers */

#include <stdio.h>

/**
 * main - putchar #16 nums with for loop
 */
int main(void)
{
	int i;

	for (i = 0;i < 16; i++)
	{
		char d = (i < 10) ? ('0' + i) : ('a' + i - 10);
		putchar(i);
	}

	putchar('\n');
	
	return (0);
}
