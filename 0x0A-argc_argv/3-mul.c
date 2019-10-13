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
			if (argc == 3)
			{
				times *= atoi(argv[x]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", times);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
