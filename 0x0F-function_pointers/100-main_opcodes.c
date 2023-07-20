#include <stdio.h>
#include <stdlib.h>

/**
 * main - print 1st n bytes of OpCodes(of main)
 * @ac: arg counter
 * @av: arg vector
 * Return: 0
 */
int main(int ac, char *av[])
{
	unsigned char *p;
	int nb, i;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(av[1]);
	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = (unsigned char *)main;
	for (i = 0; i < nb; i++)
	{
		if (i == nb - 1)
		{
			printf("%02x\n", p[i]);
		}
		else
		{
			printf("%02x ", p[i]);
		}
	}

	return (0);
}
