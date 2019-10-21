#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Release the dog
 * @d: Variable tipo dog_t
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d.name);
		free(d.owner);
		free(d);
	}
	else
		return;
}
