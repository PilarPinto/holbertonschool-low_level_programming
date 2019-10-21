#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Show th characteristics of a dog in a list.
 * @d: Is he deference variable
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if(d)
	{
		if ((*d).name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", (*d).name);
		}
		if ((*d).age == '\0')
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", (*d).age);
		}
		if ((*d).owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
