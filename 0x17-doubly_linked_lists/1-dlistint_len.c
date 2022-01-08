#include "lists.h"
/**
 * dlistint_len - number the elements of a dlistint_t
 * @h: dlistint_t list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	if (h == NULL)
		return (c);
	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
