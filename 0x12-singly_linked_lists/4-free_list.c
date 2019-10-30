#include "lists.h"
/**
 * free_list - check the code for Holberton School students.
 * @head: Is the pointer to the list
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
		free(head);
	}
}
