#include <stdio.h>
#include <stdlib.h>

/**
 * main - print 1st n bytes of OpCodes(of main)
 * @ac: arg counter
 * @av: arg vector
 * Return: 0
 */
int main (int ac, char *av[])
{
	unsigned char *p;
	int nb;

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
	while (nb > 0 && *p)
	{
		printf("%02x ", *p);
		p++;
		nb--;
	}
	printf("\n");

	return (0);
}
