#include "lists.h"

/**
 * add_dnodoint_end - Adds a new nodo at the end of a dlistint_t list.
 * @head: Double pointer to struct.
 * @n: data to insert in the new nodo.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodoint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodo = NULL, *tmp = *head;

	if (head == NULL)
		return (NULL);

	nodo = malloc(sizeof(dlistint_t));
	if (!nodo)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	nodo->n = n;
	nodo->next = NULL;
	if (*head == NULL)
	{
		nodo->prev = NULL;
		(*head) = nodo;
		return (nodo);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = nodo;
	nodo->prev = tmp;
	return (nodo);
}
