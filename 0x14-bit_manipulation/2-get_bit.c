#include "main.h"

/**
 * get_bit - return value of a bit at a given index
 * @n: passed number
 * @index: index starting from 0
 * Return: value at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1ul << index;
	/*mask w/ single bit (1) at index*/

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);/*index out of range*/

	if (n & mask)
		return (1);
	else
		return (0);
}
