#include "hash_tables.h"

/**
 * hash_table_create - create a hash table type(hash_table_t)
 * @size: the size of the newly created table
 *
 * Return: ptr->newly created table || NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = (hash_node_t **) calloc(sizeof(hash_node_t *), size);

	if (!new_table->array)
		return (NULL);
	return (new_table);
}
