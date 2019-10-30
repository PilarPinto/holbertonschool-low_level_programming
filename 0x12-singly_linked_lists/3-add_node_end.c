#include "lists.h"
/**
 * add_node_end - Add node to the end
 * @head: Is the pointer to the list
 * @str: Is the pointer to element in the list
 * Return: The new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t counter = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;


	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next != 0)
		{
			last = last->next;
		}
		last->next = new_node;
	}
	new_node->str = strdup(str);

	while (str[counter] != '\0')
	{
		counter++;
	}

	new_node->len = counter;


	return (new_node);
}
