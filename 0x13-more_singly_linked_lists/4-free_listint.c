#include "lists.h"
/**
 * free_listint - frees
 * @head: pointer to struct
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
