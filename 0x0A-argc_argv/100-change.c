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
	int cents = 0;
	int money;
		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}
		money = atoi(argv[1]);
		while (money > 0)
		{
			if (money - 25 >= 0)
			{
				money = money - 25;
				cents++;
			}
			else if (money - 10 >= 0)
			{
				money = money - 10;
				cents++;
			}
			else if (money - 5 >= 0)
			{
				money = money - 5;
				cents++;
			}
			else if (money - 2 >= 0)
			{
				money = money - 2;
				cents++;
			}
			else if (money - 1 >= 0)
			{
				money = money - 1;
				cents++;
			}

		}
	printf("%d\n", cents);
	return (0);
}
