/* print the sum of even numbers in fibonacci sequence */
#include <stdio.h>
/**
 * main - sum even valued numbers in fibonacci
 *
 * Return: 0
 */
int main(void)
{
	long limit = 4000000;
	long i = 1;
	long j = 2;
	long k;
	long sum = 0;
	
	while (i <= limit)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
		k = i + j;	
		i = j;
		j = k;
	}
	printf("%ld\n", sum);

	return (0);
}
