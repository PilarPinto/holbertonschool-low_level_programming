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
	int x, times = 1;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			times *= atoi(argv[x]);
		}
	printf("%d\n", times);
	}
	return (0);
}
