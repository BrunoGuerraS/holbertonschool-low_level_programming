#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ptr = NULL;
	char f = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			f = 1;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
