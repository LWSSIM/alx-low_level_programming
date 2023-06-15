/* This program prints the size of various types on the computer its is ran on */

#include <stdio.h>

/**
 * main - print types and their sizes 
 * Return: 0
 */
int main(void)
{
	const char* typeName[] = 
	{
		"char", "int", "long", "long long", "float"
	};
	const size_t typeSize[] = 
	{
		sizeof(char), sizeof(int), sizeof(long), sizeof(long long), sizeof(float)
	};
	const size_t numTypes = sizeof(typeSize) / sizeof(typeSize[0]);

	for (size_t i=0; i<numTypes; i++)
	{
		printf("Size of a %s: %zu bytes\n", typeName[i], typeSize[i]);
	}
	return (0);
}

