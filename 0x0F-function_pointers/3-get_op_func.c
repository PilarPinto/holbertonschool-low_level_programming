#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - Selec the operator
 *
 * @s: The operator a function pointer argument
 * Return: A pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while ((ops[i].op[0] != *s) && (i <= 4))
		i++;

	return (ops[i].f);
}
