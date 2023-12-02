#include "hash_tables.h"

/**
* shash_table_create - creates a hash table
* @size: the table size
*
* Return: the table or Null
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = (shash_table_t *) malloc(sizeof(shash_table_t));

	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = (shash_node_t **) calloc(sizeof(shash_node_t *), size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	new_table->shead = NULL;
	new_table->stail = NULL;

	if (!new_table->array)
		return (NULL);
	return (new_table);
}

/**
* llsorter - sorts nodes of linked list in qscending ASCII
* @ht: ptr to table
* @node: ptr to node to sort
*/
void llsorter(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *p;

	if (!ht->shead || !ht->stail)
	{
		ht->shead = ht->stail = node;
		return;
	}

	p = ht->shead;
	while (p)
	{
		if (strcmp(node->key, p->key) < 0)
		{
			node->snext = p;
			node->sprev = p->sprev;
			p->sprev = node;
			if (node->sprev)
				node->sprev->snext = node;
			else
				ht->shead = node;
			return;
		}
		p = p->snext;
	}
	node->sprev = ht->stail;
	ht->stail->snext = node;
	ht->stail = node;
}

/**
* shash_table_set - stores an element(key:value) in hash table
* Note: sorted order per ASCII key &
* uses seperate chaining to avoid collisions
* @ht: ptr->hash_table_t
* @key: key to be hashed and stored
* @value: value corresponding to the key to be stored
*
* Return: 1->succ || 0->fail
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL;
	shash_node_t *head = NULL;
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
	/*update value for existing key on colision in linked list*/
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
	new_node = (shash_node_t *) malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = c_value;
	new_node->next = ht->array[index];
	new_node->snext = new_node->sprev = NULL;
	ht->array[index] = new_node;

	llsorter(ht, new_node);
	return (1);
}

/**
* shash_table_get - retreive value associated with a key from hash table
* @ht: ptr->hashtable
* @key: key str
*
* Return: value str
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *head;
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

/**
* shash_table_print - prints content of the hash table
* @ht: hash table
*
* Return: nothing
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head;
	int count = 0;


	if (!ht || !ht->array)
		return;

	printf("{");

	for (head = ht->shead; head; head = head->snext)
	{
		if (count)
			printf(", ");
		printf("'%s': '%s'", head->key, head->value);
		count++;
	}
	printf("}\n");
}

/**
* shash_table_print_rev - prints content of the hash table in reverse
* @ht: hash table
*
* Return: nothing
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *head;
	int count = 0;


	if (!ht || !ht->array)
		return;

	printf("{");

	for (head = ht->stail; head; head = head->sprev)
	{
		if (count)
			printf(", ");
		printf("'%s': '%s'", head->key, head->value);
		count++;
	}
	printf("}\n");
}

/**
* shash_table_delete - deletes a hash_table_t
* @ht: ptr->hash_table
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *head;
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				while (ht->array[i]) /*loop throug array item nodes*/
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
