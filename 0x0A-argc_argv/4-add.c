#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Is the main code of arg
 * @argc: The size 0 of argv
 * @argv: Array that pointers just the project name
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int x, add = 0, count = 1;

	for (x = 1; x < argc ; x++)
	{
		if(isdigit(*argv[1]))
		{
			add += atoi(argv[x]);
		}
		if(!(isdigit(*argv[count++])))
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
