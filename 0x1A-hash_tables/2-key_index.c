#include "hash_tables.h"

/**
 * key_index - this is a function that gives index of a key
 * @key: this is a parameter
 * @size: this is a parameter
 * Return: key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
