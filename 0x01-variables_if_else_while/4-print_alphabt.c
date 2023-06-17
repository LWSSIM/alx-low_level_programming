/* print alpha != qe*/

#include <stdio.h>

/**
 * main - loop alphabet with exceptions
 *
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
