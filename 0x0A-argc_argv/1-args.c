#include <stdlib.h>
#include <stdio.h>
/**
 * main - Is the main code of arg
 * @argc: The size 0 of argv
 * @argv: Array that pointers just the project name
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int m;
	(void) argv;
	m = argc - 1;

	printf("%d\n", m);
	return (0);
}
