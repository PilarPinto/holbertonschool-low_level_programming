#include "lists.h"

/**
 * print_list - Is a function to print the elements lists
 *
 * @h: Is the list pointer
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int n_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
