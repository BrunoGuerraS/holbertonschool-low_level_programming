#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size
 * Return: Returns a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size <= 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t) * 1);
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	/*calloc clean memory*/
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
