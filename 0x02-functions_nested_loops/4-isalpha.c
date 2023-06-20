/*function: check is char alpha*/

#include "main.h"

/**
 * _isalpha - check if a char is alphabetic
 *
 * @c: char to be checked
 *
 * Return: 1 == [alpha] || 0 != [alpha]
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	 return (0);
	}
}
