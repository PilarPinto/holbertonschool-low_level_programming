#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is fuction pointer param
 * @name: name of the person
 * @f: Is the name of the function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
