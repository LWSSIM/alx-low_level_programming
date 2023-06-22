/* find and print the 1st 98 fibonaci num */
#include <stdio.h>
/**
 * main - print 98 Fibonacci nums
 *
 * Return: 0
 */
int main(void)
{
	unsigned long x = 1;
	unsigned long y = 2;
	unsigned long k;
	int i;

	printf("%lu, %lu, ", x, y);

	for (i = 3; i <= 98; i++)
	{
		k = x + y;

		printf("%lu", k);

		if (i < 98)
		{
			printf(", ");
		}

		x = y;
		y = k;
	}
	printf("\n");

	return (0);
}
