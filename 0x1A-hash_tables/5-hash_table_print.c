#include "hash_tables.h"

/**
 * hash_table_print - prints content of the hash table
 * @ht: hash table
 *
 * Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i;
	int count = 0;


	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (count && ht->array[i])
			printf(", ");

		for (head = ht->array[i]; head; head = head->next)
		{
			printf("'%s': '%s'", head->key, head->value);
			if (head->next)
				printf(", ");
			count++;
		}
	}
	printf("}\n");
}
