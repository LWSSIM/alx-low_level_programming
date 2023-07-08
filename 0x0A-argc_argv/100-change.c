#include <stdio.h>
#include <stdlib.h>

/**
 * main - print min num of coins to make change
 * @argc: count
 * @argv:vector
 * Return: 0 || 1
 */
int main(int argc, char *argv[])
{
	int dig, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	dig = atoi(argv[1]);
	if (dig < 0)
	{
		printf("0\n");
		return (0);
	}
	i = 0;
	while (dig > 0)
	{
		if (dig >= 25)
			dig -= 25;
		else if (dig >= 10)
			dig -= 10;
		else if (dig >= 5)
			dig -= 5;
		else if (dig >= 2)
			dig -= 2;
		else if (dig >= 1)
			dig -= 1;

		i++;
	}
	printf("%d\n", i);
	return (0);
}
