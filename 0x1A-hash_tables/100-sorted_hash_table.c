#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size
 * Return: Returns a pointer to the newly created hash table
 */
shash_table_t *hash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	if (size <= 0)
		return (NULL);
	ht = malloc(sizeof(shash_table_t) * 1);
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	/*calloc clean memory*/
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key
 * @key: key
 * @size: size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}


#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value of struct
 * Return: 1 or 0
 */
int hash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *n = NULL;
	shash_node_t **ptr = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);
	n = malloc(sizeof(shash_node_t));
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
void set_check(shash_node_t **head, shash_node_t **node)
{
	shash_node_t *tl = *head;

	if (!head)
	{
		free((*node)->key);
		free((*node)->value);
		free(*node);
		return;
	}
	if (*head)
	{
		while (tl)
		{
			if (strcmp(tl->key, (*node)->key) == 0)
			{
				free(tl->value);
				tl->value = strdup((*node)->value);
				free((*node)->value);
				free((*node)->key);
				free(*node);
				return;
			}
			tl = tl->next;
		}
	}

	(*node)->next = *head;
	*head = *node;
}

#include "hash_tables.h"
/**
 * hash_table_get -retrieves a value associated with a key
 * @ht: hash_tablet
 * @key: a key value
 * Return: value
 */
char *hash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	shash_node_t *bringh = NULL;

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

#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *ptr = NULL;
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

#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr = NULL;
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
