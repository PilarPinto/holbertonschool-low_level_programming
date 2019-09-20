#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Using module of 10 to obtain the 
 * last number and conditionals
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lsd;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of");
printf(" %d is", n);
lsd = n % 10;
printf(" %d", lsd);

if (lsd > 5)
{
	printf(" and is greater than 5\n");
}

else if (lsd == 0)
{
	printf(" and is 0\n");
}

else if (lsd < 6)
{
	printf(" and is less than 6 and not 0\n");
}

return (0);
}
