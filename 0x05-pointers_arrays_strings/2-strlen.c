#include "main.h"

/**
 * _strlen - return lenght of input string
 * @s: string pointer
 */
int _strlen(char *s)
{
	int i = 0;		/* char *p = s; */

	while (s[i] != '\0')	/* while(*s != 0)*/
	{			/* { */

		i++;		/* s++; */
	}			/* } */

	return (i);		/* return (s - p);*/
}
