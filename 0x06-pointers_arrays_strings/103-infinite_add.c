#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: 1st num
 * @n2: 2nd num
 * @r: buffer storing result of addition
 * @size_r: size of this buffer
 * Return: pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0;
	int i, j, k;
	int carry = 0;

	while (n1[len1] != '\0')
	{
		len1++;
	}
	while (n2[len2] != '\0')
	{
		len2++;
	}

	i = len1 - 1, j = len2 - 1, k = size_r - 1;

	while (i >= 0 || j >=0 || carry > 0)
	{
		int dig1, dig2, sum, dig;

		dig1 = (i >= 0) ? n1[i] - '0' : 0;
		dig2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = dig1 + dig2 + carry;
		carry = sum / 10;
		dig = sum % 10;

		if (k < 0)
		{
			return (0);
		}

		r[k] = dig + '0';

		i--, j--, k--;
	}

	return (&r[k + 1]);
}
