/* print multiples of 3 and 5 up to 1024*/
#include <stdio.h>
/**
 * main - print sum of all multiples of 3 or 5 <1024
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0, i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("the sum of all the multiples of 3 or 5 below  1024 is: %d\n", sum);
	return (0);
}
