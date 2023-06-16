/* This prog gen n + print conditional(n) str */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - gen rand n + check last digit + print
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;
	printf("Last digit of %d is %d ", n, z);
		if (z > 5)
		{
			printf("and is greater than 5\n");
		}
		else if (z < 6 && z != 0)
		{
			printf("and is less than 6 and not 0\n");
		}
		else if (z == 0)
		{
			printf("and is 0\n");
		}
	return (0);
}
