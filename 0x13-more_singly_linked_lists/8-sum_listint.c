#include "lists.h"

/**
 * sum_listint - Sum all the data nodes
 * @head: Is the pointer to the linked list
 * Return: The add resut
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
