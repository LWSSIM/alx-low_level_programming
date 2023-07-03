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
	int i = 0, j = 0, k = 0;
	int sum = 0, x10 = 0, start = 0, temp = 0;

	while (n1[i] != 0)
		i++;
	while (n2[j] != 0)
		j++;

	if (i >= size_r - 1 || j >= size_r - 1)
		return (0);

	i--;
	j--;

	for (; i >= 0 || j >= 0; i--, j--, k++)
	{
		sum = x10;

		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		x10 = sum / 10;
		r[k] = sum % 10 + '0';
		if (k >= size_r - 1)
			return (0);
	}
	if (x10 > 0)
	{
		if (k >= size_r - 1)
			return (0);
		r[k] = x10 + '0';
		k++;
	}
	r[k] = '\0';
	k--;
	for (; start < k; k--, start++)
	{
		temp = r[k];
		r[k] = r[start];
		r[start] = temp;
	}
	return (r);
}
