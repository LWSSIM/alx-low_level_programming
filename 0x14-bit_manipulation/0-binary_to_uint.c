#include "main.h"

/**
 * binary_to_uint - convert from binary to U_int
 * @b: ptr->str(0||1)
 *
 * Return: number || 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		x = x << 1; /*left shift to make room for new bit*/

		if (*b == '1')
			x = x | 1;/*set least signfcnt bit to 1*/

		b++;
	}
	return (x);
}
