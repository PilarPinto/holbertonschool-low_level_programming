#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node.
 * @head: Is the head of the linked list
 * @index: Is the index of the node
 * Return: The -1 i fail or 1 if succeeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *wilc;
	listint_t *cp = *head;
	unsigned int in = 0;

	if (cp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (1);
	}
	while (in < (index - 1))
	{
		if (cp->next == NULL)
			return (-1);
		cp = cp->next;
		in++;
	}
	wilc = cp->next;
	cp->next = wilc->next;
	free(wilc);
	return (1);
}
