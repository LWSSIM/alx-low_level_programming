/* print the last digit of a number */

#include "main.h"
/**
* print_last_digit - print the last digit of a number
*
* @n: input number
*
* Return: i last digit of n
*/
int print_last_digit(int n)
{
	int i = n % 10;
	
	if (i < 0)
	{
		i = -i;
		_putchar('0' + i);
	}
	else if (i >= 0)
	{
		_putchar('0' + i);
	}
	
	return (i);
}
