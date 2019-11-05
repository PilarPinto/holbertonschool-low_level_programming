#include "lists.h"

/**
 * insert_nodeint_at_index - Check the node.
 * @head:Is the direction of the linked list
 * @idx: The index
 * @n: The data
 * Return: The new node.
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
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		cp = *head;
		for (in = 0; in < idx; in++)
		{
			cp = cp->next;
			if (cp == NULL || cp->next == NULL)
			{
				free(new_node);
				return (NULL);
			}
		}
		new_node->next = cp->next;
		cp->next = new_node;
		return (new_node);
	}
	return (new_node);
}
