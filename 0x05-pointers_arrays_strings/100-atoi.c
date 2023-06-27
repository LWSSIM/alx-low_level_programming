#include "main.h"

/**
 * _atoi - convert str to int based on certain rules
 * @s: pointer to str
 * Return: converted int
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int INT_MAX = 2147483647;
	int INT_MIN = (-INT_MAX - 1);
	int x;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		x = s[i] - '0';

		if (result > INT_MAX / 10 ||
				(result == INT_MAX / 10
				 && x > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		result = result * 10 + x;
		i++;
	}
	return (result * sign);
}
