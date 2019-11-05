#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *cp = *head;
	unsigned int in;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node-> next = cp;
		*head = new_node;
		return (new_node);
	}
	for (in = 0; in < idx; in++)
	{
		if (cp == NULL || cp->next == NULL)
			return (NULL);
		cp = cp->next;
	}
	new_node->next = cp->next;
	cp->next = new_node;
	return (new_node);

}
