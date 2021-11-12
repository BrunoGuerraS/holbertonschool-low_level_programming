#include "lists.h"
/**
 * add_node_end - that adds a new node at the end
 * @head: double pointer
 * @str: string
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;
	list_t *tmp = *head;

	while (str[i] != '\0')
	{
		i++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;

	return (new);
}
