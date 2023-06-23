#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * largestPrimeFactor - find and print largest prime
 * @n: input number
 *
 * Return: result
 */
unsigned long largestPrimeFactor(unsigned long n)
{
	unsigned long factor = 2;

	while (factor * factor <= n)
	{
		if (n % factor == 0)
		{
			n = n / factor;
		}
		else
		{
			factor++;
		}
	}
	return (n);
}
/**
 * main - print result for a certain value
 * Return: 0
 */
int main(void)
{
	unsigned long x = 612852475143;
	unsigned long LF = largestPrimeFactor(x);

	printf("%lu\n", LF);

	return (0);
}
