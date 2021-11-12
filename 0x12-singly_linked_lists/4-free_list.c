#include "lists.h"
/**
 * free_list - that frees
 * @head: pointer to sturct
 * Return: 0
 */
void free_list(list_t *head)
{
	if (head->next)
		return;
	free_list(head->next);
	free(head);
}
