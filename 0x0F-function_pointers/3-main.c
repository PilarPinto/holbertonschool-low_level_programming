#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code for the calc fucntion.
 * @argc: is the index of args
 * @argv: Is the stack of args
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int an, bn;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	     && argv[2][0] != '/' && argv[2][0] != '%') || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}


	func = get_op_func(argv[2]);

	an = atoi(argv[1]);
	bn = atoi(argv[3]);

	printf("%d\n", func(an, bn));

	return (0);
}
