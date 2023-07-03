#include "main.h"

/**
 * _strspn - get lenght of prefix substring
 * @s: pointer to a prefix sub-str
 * @accept: pointer to chars allowed in prefix
 * Reutrn: number of bytes of s which contains bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;
	int check;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				check = 1;
				break;
			}
		}
		if (check == 0)
			break;
		n++;
	}
	return (n);
}
