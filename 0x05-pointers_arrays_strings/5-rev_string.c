#include "main.h"

/**
 * rev_string - reverse a str
 * @s:pointer to input str
 */
void rev_string(char *s)
{
	char *A = s;
	char *Z = s;

	while (*Z != '\0')
	{
		Z++;
	}
	Z--;

	while (A < Z)
	{
		char tmp = *A;

		*A = *Z;
		*Z = tmp;

		A++;
		Z--;
	}
}
