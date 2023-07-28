#include <stdio.h>

/**
 * main - find and print the 98 fibonacci
 *
 * Return: 0
 */
int main(void)
{
	unsigned long j, k, sum, a11, b12, c21, d22, x1, x2;
	int i;

	j = 1;
	k = 2;
	printf("%lu", j);
	for (i = 0; i < 92; i++)
	{
		sum = j + k;
		printf(", %lu", k);

		j = k;
		k = sum;
	}
	a11 = j / 1000000000;
	b12 = j % 1000000000;
	c21 = k / 1000000000;
	d22 = k % 1000000000;
	for (i = 93; i < 99; i++)
	{
		x1 = a11 + c21;
		x2 = b12 + d22;
		if (b12 + d22 > 9999999999)
		{
			x1++;
			x2 = x2 % 10000000000;
		}
		printf("%lu%lu", x1, x2);
		if (i != 98)
			printf(", ");
		a11 = c21;
		b12 = d22;
		c21 = x1;
		d22 = x2;
	}
	printf("\n");
	return (0);
}
