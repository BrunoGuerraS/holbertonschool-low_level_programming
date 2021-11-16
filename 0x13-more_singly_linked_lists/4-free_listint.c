#include "lists.h"
/**
 * free_listint - frees
 * @head: pointer to struct
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head->n);
	free(head);
}
