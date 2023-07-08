#include <stdio.h>
#include <stdlib.c>

/**
 * main - print min num of coins to make change
 * @argc: count
 * @argv:vector
 * Return: 0 || 1
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int dig, i;

	dig = atoi(argv[1]);
	if (dig < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; n > 0; i++)
	{
		switch (n)
		{
			case 25:
				n -= 25;
				break;
			case 10:
				n -= 10;
				break;
			case 5:
				n -= 5;
				break;
			case 2:
				n -= 2;
				break;
			default:
				n -= 1;
		}
	}
	printf("%d\n", i);
	return (0);
}
