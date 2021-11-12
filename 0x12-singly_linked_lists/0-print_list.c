#include "lists.h"
/**
 * print_list - prints all the elements
 * @h: variable type list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *whisky = h;

	while (whisky)
	{
		if (whisky->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", whisky->len, whisky->str);
		}
		whisky = whisky->next;
		count++;
	}
	return (count);
}
