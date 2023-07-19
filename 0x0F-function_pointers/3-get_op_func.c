#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - select an op_fuction based on user input
 * @s: pointer to the passed operator (arg2)
 * Return: prt to corresponding fn (int)
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}
	return (0);
}
