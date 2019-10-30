#include "lists.h"
/**
 * list_len - Function that return the number of
 * elements in a linked lists
 * @h: The list pointer
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
