#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - gen rand pswd (while sum of chars == ad4)
 * Return: (0)
 */
int main(void)
{
	int pswd[100];
	int i, x;
	int sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pswd[i] = rand() % 78;
		putchar(pswd[i] + '0');
		sum += pswd[i] + '0';

		if ((2772 - sum) - '0' < 78)
		{
			x = (2772 - sum) - '0';
			sum += x;
			putchar(x + '0');
			break;
		}
	}
	return (0);
}
