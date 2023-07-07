#include "main.h"

/**
 * main - print program name
 * @argc: arg count
 * @argv:arg vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; arg[i] != '\0'; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			_putchar(arg[i][j]);
		}
	}
	_putchar('\n');

	return (0);
}
