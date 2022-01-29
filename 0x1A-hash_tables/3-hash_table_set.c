#include <hash_tables.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value of struct
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n = NULL;
	hash_node_t **ptr = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	ptr = &(ht->array[index]);
	n->key = strdup(key);
	n->value = strdup(value);
	n->next = NULL;
	set_check(ptr, &n);

	return (1);
}
/**
 * set_check - set and check nodes
 * @head: pointing to hash_node in the hash table
 * @node: node to add in the index of the hash table
 *
 * Return: Nothing
 */
void set_check(hash_node_t **head, hash_node_t **node)
{
	hash_node_t *tail = *head;

	if (!head)
	{
		free((*node)->key);
		free((*node)->value);
		free(*node);
		return;
	}
	if (*head)
	{
		while (tail)
		{
			if (strcmp(tail->key, (*node)->key) == 0)
			{
				free(tail->value);
				tail->value = strdup((*node)->value);
				free((*node)->value);
				free((*node)->key);
				free(*node);
				return;
			}
			tail = tail->next;
		}
	}

	(*node)->next = *head;
	*head = *node;
}
