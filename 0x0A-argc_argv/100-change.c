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
	int money = atoi(argv[1])
   
		if(argc != 2 || money < 0){
			printf("Error\n");
			return (1);
		}
	while (money > 0)
	{
		if (money - 25 >= 0)
		{
			money = money -25;
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
	}
	printf("%d", cents);
   
	return 0;
}
