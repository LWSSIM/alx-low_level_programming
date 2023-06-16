/* This program prints a string to the strderr...(2) */

#include <unistd.h>

/**
 *main - prints string to stderr (no printf /put /(man(3) ...)
 *write - [file descriptor(2==stderr), adress of array, array size-1(\0)
 *Return: 1
 */
int main(void)
{
	char quote[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quote, sizeof(quote) - 1);

	return (1);
}


