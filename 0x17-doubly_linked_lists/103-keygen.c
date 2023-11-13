#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main crack generate password per usename entered
 * @ac: ac
 * @av: av
 *
 * Return: 0 || 1
 */
int main(int ac, char **av)
{
	unsigned int i, j;
	char *st = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char arr[7] = "      ";
	size_t lenght, increment;

	if (ac != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	lenght = strlen(av[1]);
	arr[0] = st[(lenght ^ 59) & 63];

	for (i = 0, increment = 0; i < lenght; i++)
		increment += av[1][i];

	arr[1] = st[(increment ^ 79) & 63];

	for (i = 0, j = 1; i < lenght; i++)
		j *= av[1][i];
	arr[2] = st[(j ^ 85) & 63];

	for (j = av[1][0], i = 0; i < lenght; i++)
		if ((char)j <= av[1][i])
			j = av[1][i];
	srand(j ^ 14);

	arr[3] = st[rand() & 63];

	for (j = 0, i = 0; i < lenght; i++)
		j += av[1][i] * av[1][i];
	arr[4] = st[(j ^ 239) & 63];

	for (j = 0, i = 0; (char)i < av[1][0]; i++)
		j = rand();
	arr[5] = st[(j ^ 229) & 63];

	printf("%s\n", arr);
	return (0);
}
