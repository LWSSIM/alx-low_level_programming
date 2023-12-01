#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht, *ht_1 = NULL;

	ht = hash_table_create(1024);
	printf("%i", hash_table_set(ht, "betty", "cool")); /*normal input*/
	printf("%i", hash_table_set(ht, "hetairas", "pzoe")); /*key colides with below*/
	printf("%i", hash_table_set(ht, "mentioner", "lpaoz"));
	printf("%i", hash_table_set(ht, "heliotropes", "clize")); /*key colides with below*/
	printf("%i", hash_table_set(ht, "neurospora", "lolpo"));

	printf("%i", hash_table_set(ht_1, "neurospora", "lolpo")); /*fails empty*/
	printf("\n");
	return (EXIT_SUCCESS);
}
