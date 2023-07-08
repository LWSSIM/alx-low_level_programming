#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 || 1
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int i, sum = 0;

		for (i = 1; i < argc; i++)
		{
			char *p = argv[i];

			while (*p)
			{
				if (!isdigit(*p))
				{
					printf("Error\n");
					return (1);
				}
				p++;
			}
			int dig = atoi(argv[i]);

			sum += dig;
		}
		printf("%d\n", sum);
		return (0);
	}
}
