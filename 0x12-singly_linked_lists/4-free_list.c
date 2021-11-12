#include "lists.h"
/**
 * free_list - that frees
 * @head: pointer to sturct
 * Return: 0
 */
void free_list(list_t *head)
{
	// list_t *tmp = head;
	
	// head = tmp->next;
	// free(tmp);
	if (head)
		return;
	free_list(head->next);
	free(head);
}
