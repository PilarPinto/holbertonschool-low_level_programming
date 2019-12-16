#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete node at nth
 * @head: Pointer to direction of the head
 * @index: The position in de ll
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *res_mem = *head;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = res_mem->next;
		if (res_mem->next == NULL)
			return (-1);
		res_mem->next->prev = NULL;
		free(res_mem);
		return (1);
	}

	while (counter < index)
	{
		if (res_mem->next == NULL)
			return (-1);
		res_mem = res_mem->next;
		counter++;
	}
	if (res_mem->next)
		res_mem->next->prev = res_mem->prev;
	free(res_mem);
	return (1);
}
