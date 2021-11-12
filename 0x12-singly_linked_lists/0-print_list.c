#include "list.h"
/**
 * print_list - prints all the elements
 * @h: variable type list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t whisky = 0;

	while (whisky->next != NULL)
	{
		printf("[%u] %s\n", whisky->len, whisky->str);
		whisky = whisky->next;
		count++;
	}
	return (count);
}
