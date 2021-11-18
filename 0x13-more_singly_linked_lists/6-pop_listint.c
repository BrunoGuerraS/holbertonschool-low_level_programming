#include "lists.h"
/**
 * pop_listint - delete a first node
 * @head: double pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (i);
}
