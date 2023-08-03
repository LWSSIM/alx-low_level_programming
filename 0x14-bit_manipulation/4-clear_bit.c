#include "main.h"

/**
 * clear_bit - set the values to 0 at a given bit
 * @n: ptr->uli binary number
 * @index: index to clear
 * Return: 1 || -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	/*offset->invert with ~,compare with &,clear value*/
	return (1);
}
