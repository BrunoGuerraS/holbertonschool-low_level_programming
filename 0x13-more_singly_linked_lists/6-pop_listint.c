#include "lists.h"
/**
 * pop_listint - delete a first node
 * @head: double pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *tmp;

	if (*head != NULL)
		return (0);
	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (num);
}
