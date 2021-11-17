#include "lists.h"
/**
 * get_nodeint_at_index - print nts node
 * @head: pointer to header
 * @index: size_t
 * Return: pointer to struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = head;

	if (head == NULL || index < 0)
		return (NULL);
	if (index == 0)
		return (head);
	while (count < index)
	{
		tmp = tmp->next;
		count++;
	}
	return (tmp);
}
