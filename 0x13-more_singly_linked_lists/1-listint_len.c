#include "lists.h"

/**
 * listint_len - Function that return the number of elements
 * @h: Is the linked list pointer
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
