#include "lists.h"

/**
 * pop_listint - FUnction delete the first node.
 * @head: is the direction of the pointer of the list
 * Return: The data of the node.
 */
int pop_listint(listint_t **head)
{
	listint_t *wilc;
	int index;

	if (*head == NULL)
		return (0);



	wilc = *head;
	index = (*head)->n;
	*head = (*head)->next;

	free(wilc);
	return (index);
}
