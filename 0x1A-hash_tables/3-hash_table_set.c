#include "hash_tables.h"

/**
 * hash_table_set - stores an element(key:value) in hash table
 * Note: this function uses seperate chaining to avoid collisions
 * @ht: ptr->hash_table_t
 * @key: key to be hashed and stored
 * @value: value corresponding to the key to be stored
 *
 * Return: 1->succ || 0->fail
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *head = NULL;
	unsigned long int index;
	char *c_value = NULL;

	if (!key || !ht || *key == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	c_value = strdup(value);
	if (!c_value)
		return (0);
	/*update existing key value 1st occurence in list*/
	if (ht->array[index] && !strcmp(key, ht->array[index]->key))
	{
		free(ht->array[index]->value);
		ht->array[index]->value = c_value;
		return (1);
	}
	/*update value for existing key if found in linked list*/
	for (head = ht->array[index]; head; head = head->next)
	{
		if (!strcmp(key, ht->array[index]->key))
		{
			free(head->value);
			head->value = c_value;
			return (1);
		}
	}
	/*newly added key*/
	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = c_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
