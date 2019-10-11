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
	int i = 0;

	if (i < argc)
		printf("%s\n", argv[i]);
	return (0);
}
