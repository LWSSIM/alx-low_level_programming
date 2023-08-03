#include "main.h"

/**
 * flip_bits - returns the need number of bits needed to flip n->m
 * @n: passed number
 * @m: passed number 2
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	/*XOR n^m -> get different bits*/
	unsigned int count = 0;/*count different bits*/

	while (diff != 0)/*count the nmbr of set bitsin diff*/
	{
		diff &= (diff - 1);
		count++;
	}
	return (count);
}
