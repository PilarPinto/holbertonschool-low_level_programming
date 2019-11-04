#include "lists.h"

/**
 * free_listint - Liberate the space used.
 * @head: Is the pointer to the list
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *wilc;

	if (head != NULL)
	{
		wilc = head;
		head = wilc->next;
		free(head);
	}
}
