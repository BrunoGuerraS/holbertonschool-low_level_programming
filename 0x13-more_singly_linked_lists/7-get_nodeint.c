#include "lists.h"
/**
 * get_nodeint_at_index - print nts node
 * @head: pointer to header
 * @index: size_t
 * Return: pointer to struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && new; i++)
	{
		if (new->next == NULL)
			return (NULL);
		new = new->next;
	}
	return (new);
}
