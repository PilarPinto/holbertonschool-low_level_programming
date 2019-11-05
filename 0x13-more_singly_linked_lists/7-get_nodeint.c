#include "lists.h"

/**
 * get_nodeint_at_index - Funtion that obtain a certain index.
 * @head: Is the linked list pointer
 * @index: is the index that wants to found
 * Return: That index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	if (head == NULL)
		return (NULL);

	for (node = 0; node < index && head != NULL; node++)
	{
		head = head->next;
	}
	return (head);
}
