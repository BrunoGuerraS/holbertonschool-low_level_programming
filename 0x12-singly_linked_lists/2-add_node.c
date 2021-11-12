#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head: double pointer to head
 * @str: the name
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;

	list_t *new;

	while (str[i] != '\0')
	{
		i++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
