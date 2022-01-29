#include "hash_tables.h"
/**
 * hash_table_get -retrieves a value associated with a key
 * @ht: hash_tablet
 * @key: a key value
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	hash_node_t *bringh = NULL;

	if (ht == NULL || key == NULL || !strcmp(key, ""))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	bringh = ht->array[index];
	while (bringh)
	{
		if (strcmp(bringh->key, (char *)key) == 0)
			return (bringh->value);
		bringh = bringh->next;
	}
	return (NULL);
}
