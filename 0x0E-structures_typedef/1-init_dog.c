#include "dog.h"
/**
 * init_dog - Init the dog structure.
 * @d: Is the structure deference variable
 * @name: Is the name of the dog
 * @age: Is the age of the dog
 * @owner: Is the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
