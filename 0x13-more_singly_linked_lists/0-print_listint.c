#include "lists.h"

/**
 * print_listint - The function to print list
 * @h: The pointer to the head of the list
 * Return:The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
