#include "lists.h"

/**
 * free_listint2 - check the code for Holberton School students.
 * @head: is the double pointer to the linked list
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *wilc;

	if (head == NULL)
		return;

	while ((*head) != NULL)
	{
		wilc = (*head)->next;
		free(*head);
		(*head) = wilc;
	}
	*head = NULL;
}
