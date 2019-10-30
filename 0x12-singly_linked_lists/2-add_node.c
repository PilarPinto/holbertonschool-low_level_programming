#include "lists.h"
/**
 * add_node - Add node at the beginnig of the list
 * @head: Is the pointer to pinter to head of the list
 * @str: Is the element string
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t counter = 0;
        list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while(str[counter] != '\0')
	{
		counter++;
	}

	new_node->len = counter;

	new_node->next = *head;
	*head = new_node;

	return(*head);
}
