#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - perfomrs simple oprerations
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}

	res = get_op_func(argv[2])(num1, num2);
	printf("%i\n", res);
	return (0);
}
