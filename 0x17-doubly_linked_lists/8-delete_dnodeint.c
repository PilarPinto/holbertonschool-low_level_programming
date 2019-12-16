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

	if (head == NULL || *head == NULL)
		return (-1);

	while (index != 0)
	{
		if (res_mem == NULL)
			return (-1);
		res_mem = res_mem->next;
		index--;
	}
	if (res_mem == *head)
	{
		*head = res_mem->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		res_mem->prev->next = res_mem->next;
		if (res_mem != NULL)
			res_mem->next->prev = res_mem->prev;
	}
	free(res_mem);
	return (1);
}
