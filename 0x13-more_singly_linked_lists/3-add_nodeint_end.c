#include "lists.h"

/**
 * add_nodeint_end - check the code for Holberton School students.
 * @head: The linked list pointer
 * @n:The data in each node
 * Return: The new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{

		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
