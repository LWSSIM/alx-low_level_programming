#include <stdlib.h>
#include "main.h"

/**
 * wrdc - count words of str
 * @str: pointer input
 * Return: int
 */
int wrdc(char *str)
{
	int count = 0;
	int word = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			word = 0;
		}
		else if (word == 0)
		{
			word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * strtow - split str to words
 * @str: pntr to input str
 * Return: pntr to array of str(words) || NULL
 */
char **strtow(char *str)
{
	int wordIndex, wordLen, word, maxw, i;
	int len = wrdc(str);
	char *CrntWord = 0;
	char **words = (char **)malloc((len + 1) * sizeof(char *));

	if (str == 0 || *str == '\0')
		return (0);
	if (words == 0)
		return (0);

	wordIndex = 0, wordLen = 0, word = 0;
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			if (word == 1)
			{
				CrntWord[wordLen] = '\0';
				words[wordIndex++] = CrntWord;
				wordLen = 0;
				word = 0;
			}
		}
		else
		{
			if (word == 0)
			{
				word = 1;
				maxw = len;
				CrntWord = (char *)malloc((maxw + 1) * sizeof(char));
				if (CrntWord == 0)
				{
					for (i = 0; i < wordIndex; i++)
					{
						free(words[i]);
					}
					free(words);
					return (0);
				}
			}
			CrntWord[wordLen++] = *str;
		}
		str++;
	}
	if (word == 1)
	{
		CrntWord[wordLen] = '\0';
		words[wordIndex++] = CrntWord;
	}
	words[wordIndex] = 0;
	return (words);
}
