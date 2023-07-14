#include "main.h"
#include <stdbool.h>
#include <stdlib.h>

/**
 * print_s - print input str
 * @s: str
 */
void print_s(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}
/**
 * is_digit - check str for digit
 * @s: str
 * Return: bool
 */
bool is_digit(const char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}
/**
 * mul - multiply 2 nums
 * @num1: number
 * @num2: 2nd number
 * Return: result
 */
char *mul(const char *num1, const char *num2)
{
	int i, j, len1, len2, len_s, dig1, dig2, prod, idx1, idx2, sum, start_idx;
	int *res;
	char *final_res;

	len1 = 0;
	len2 = 0;
	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	len_s = len1 + len2;
	res = malloc(len_s * sizeof(int));
	if (res == 0)
		return (0);

	for (i = 0; i < len_s; i++)
	{
		res[i] = 0;
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			dig1 = num1[i] - '0';
			dig2 = num2[j] - '0';
			prod = dig1 * dig2;

			idx1 = i + j;
			idx2 = i + j + 1;
			sum = prod + res[idx2];

			res[idx2] = sum % 10;
			res[idx1] += sum / 10;
		}
	}
	start_idx = 0;
	while (start_idx < len_s && res[start_idx] == 0)
		start_idx++;

	final_res = malloc((len_s - start_idx + 1) * sizeof(char));
	if (final_res == 0)
		return (0);

	for (i = start_idx; i < len_s; i++)
	{
		final_res[i - start_idx] = res[i] + '0';
	}
	final_res[len_s - start_idx] = '\0';
	free(res);
	return (final_res);
}
/**
 * main - multiply 2 +n
 * @argc: arg count == 3
 * @argv: arg vector
 * Return: result
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *res;


	if (argc != 3)
	{
		print_s("Error\n");
		exit(98);
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		print_s("Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	res = mul(num1, num2);

	print_s(res);
	print_s("\n");

	free(res);
	return (0);
}
