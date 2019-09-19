#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int lsd = n % 10;
printf("Last digit of");
printf("%d is", n)
printf("%d", lsd)

if (lsd > 5)
{
printf("and is greater than 5\n");
}

else if (lsd == 0)
{
printf("and is 0\n");
}

else if (lsd < 6 && n != 0)
{
printf("and is less than 6 and not 0\n");
}

return (0);
}
