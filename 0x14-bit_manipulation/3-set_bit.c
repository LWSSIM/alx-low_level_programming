#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at given idx
 * @n: ptr->uli passed binary num
 * @idenx: index of a given bit
 * Return: 1 on succeess || -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
