#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash_table_t
 * @ht: ptr->hash_table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				while (ht->array[i])
				{
					head = ht->array[i];
					free(head->key);
					free(head->value);
					free(head);
					ht->array[i] = ht->array[i]->next;
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}
