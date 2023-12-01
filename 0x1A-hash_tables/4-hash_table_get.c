#include "hash_tables.h"

/**
 * hash_table_get - retreive value associated with a key from hash table
 * @ht: ptr->hashtable
 * @key: key str
 *
 * Return: value str
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned long int i;

	if (!ht || !key || *key == '\0')
		return (NULL);

	i = key_index((unsigned const char *)key, ht->size);

	if (ht->array[i] && !strcmp(key, ht->array[i]->key))
	{
		return (ht->array[i]->value);
	}

	for (head = ht->array[i]; head; head = head->next)
	{
		if (!strcmp(head->key, key))
			return (head->value);
	}
	return (NULL);
}
