#include "lists.h"
/**
 * free_list - that frees
 * @head: pointer to sturct
 * Return: 0
 */
void free_list(list_t *head)
{
	if (head)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
