#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;
	if (head == NULL)
		return (NULL);

	for (node = 0; node < index; node++)
	{
		head = head->next;
	}
	return (head);
}
