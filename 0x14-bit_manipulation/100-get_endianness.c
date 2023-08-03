#include "main.h"

/**
 * get_endiannes - check the endianness(multi-data types are stored in mem
 * Return: 1 || 0
 */
int get_endiannes(void)
{
	unsigned int num = 1;
	char *p = (char *)&num;

	/*if the 1st byte in mem contains the LSB -> little_endian*/
	return (*p == 1);
}
