#include "lists.h"
/**
 * listint_len -  return the elements in linked list
 * @h: pointer to struct
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
