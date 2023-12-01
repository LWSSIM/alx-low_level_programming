#include "hash_tables.h"

/**
 * key_index - get the index of a hashed key
 * @key: the key value bfr hashing
 * @size: siwe the hash table array
 *
 * Return: index where the key:value pair is stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
