#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h: pinter to sturct
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
