#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr = NULL;
	unsigned long int a = 0;

	if (ht == NULL)
		return;
	for (a = 0; a < ht->size; a++)
	{
		while (ht->array[a])
		{
			ptr = ht->array[a]->next;
			free(ht->array[a]->key);
			free(ht->array[a]->value);
			free(ht->array[a]);
			ht->array[a] = ptr;
		}
	}
	free(ht->array);
	free(ht);
}
