#include "main.h"

/**
 * is_palindrome - check if palindrome
 * @s: pointer to string
 * Return: 1 || 0
 */
int is_palindrome(char *s)
{
	int len;

	len = str_len(s);
	if (len == 0)
		return (1);
	return (eq(s, s, s + len - 1));
}
/**
 * str_len - calc str length
 * @s: str
 * Return: len
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (str_len(s + 1) + 1);
}
/**
 * eq - check char equality
 * @s: str
 * @len: str length
 * @x: move pointer
 */
int eq(char *s, char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start != *end)
		return (0);
	return (eq(s, start + 1, end - 1));
}
