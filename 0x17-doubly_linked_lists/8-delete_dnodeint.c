#include "lists.h"
/**
 * dlistint_len - Computes the elements of a dlistint_t list.
 * @h: Pointer to struct.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	if (h)
		return (1 + dlistint_len(h->next));
	return (0);
}
/**
 * delete_dnodeint_at_index - Deletes node of a dlistint_t linked list.
 * @head: Double pointer to struct.
 * @index: Index position to remove node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tem = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(tem) < index + 1)
		return (-1);
	if (index == 0)
	{
		if (tem->next)
			tem->next->prev = NULL;
		(*head) = (*head)->next;
		free(tem);
		return (1);
	}

	while (tem && i < index)
	{
		tem = tem->next;
		i++;
	}

	if (tem == NULL)
		return (-1);

	tem->prev->next = tem->next;
	if (tem->next)
		tem->next->prev = tem->prev;
	free(tem);
	return (1);
}
