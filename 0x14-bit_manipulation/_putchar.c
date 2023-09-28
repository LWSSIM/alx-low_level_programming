#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints char
 * @c: char
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
