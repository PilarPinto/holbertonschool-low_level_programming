#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Show th characteristics of a dog in a list.
 * @d
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (!(d == NULL))
	{
		if ((*d).name == NULL)
		{
			printf("Name: %s\n", "(nil)");
		}
		else
		{
			printf("Name: %s\n", (*d).name);
		}
		if ((*d).age == '\0')
		{
			printf("Age: %s\n", "(nil)");
		}
		else
		{
			printf("Age: %f\n", (*d).age);
		}
		if ((*d).owner == NULL)
		{
			printf("Owner: nil");
		}
		else
		{
			printf("Owner: %s\n", (*d).owner);
		}
	}else
	{
		return;
	}
}
