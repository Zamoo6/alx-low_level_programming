#include "hash_tables.h"

/**
 * key_index - key or vlaue geting index
 * @key: key geting
 * @size: hash table array size
 * Return: key indexing
 * Description: djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
