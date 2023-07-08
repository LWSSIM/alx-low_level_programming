#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 nums
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a, b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);

		return (0);
	}
}
