#include "lists.h"
/**
 * insert_nodeint_at_index - add a new node in nts position
 * @head: double ponter to struct
 * @idx: size_t
 * @n: int
 * Return: pointer to struct
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *tmp = *head;
	listint_t *half;
	unsigned int i = 0;

		node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (i + 1 < idx)
	{
		if (tmp->next == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
		i++;
	}
	half = tmp->next;
	tmp->next = node;
	node->next = half;
	return (node);
}
