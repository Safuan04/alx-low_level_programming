#include "hash_tables.h"

/**
 * hash_table_get - is a func that retrieves a value associated with a key
 * @ht: this is a parameter
 * @key: this is a parameter
 * Return: is key
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *init_node;
	unsigned long int i;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	init_node = ht->array[i];

	while (init_node && (strcmp(init_node->key, key) != 0))
	{
		init_node = init_node->next;
	}

	if (init_node)
		return (init_node->value);

	return (NULL);
}
