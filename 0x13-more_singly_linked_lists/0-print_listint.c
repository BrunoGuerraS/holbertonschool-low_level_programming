#include "lists.h"
/**
 * print_listint - print elements of a listint_t
 * @h: pinter to struct
 * Return: unsigned int
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->next == NULL)
		{
			count++;
			printf("%d\n", h->n);
		}
		else
		{
			count++;
			printf("%d\n", h->n);
		}
		h = h->next;
	}
	return (count);
}
