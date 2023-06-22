#include <stdio.h>
/**
 * main - find and print the 98 fibonacci
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int j = 0, k = 1, sum, a, b, c, d, x, y;

	for (i = 0; i < 92; i++)
	{
		sum = j + k;
		printf("%lu, ", sum);
		j = k;
		k = sum;
	}
	a = j / 1000000000;
	b = j % 1000000000;
	c = k / 1000000000;
	d = k % 1000000000;

	for (i = 93; i < 99; i++)
	{
		x = a + b;
		y = c + d;
		if (b + d > 9999999999)
		{
			x += 1;
			y %= 10000000000;
		}
	printf("%lu%lu", x, y);
	if ( i != 98)
	{
		printf(", ");
	}
	a = c;
	b = d;
	c = x;
	d = y;
	}
	printf("\n");
	return (0);
}
