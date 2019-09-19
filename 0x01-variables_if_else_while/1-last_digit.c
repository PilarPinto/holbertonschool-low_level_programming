#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int lsd = n % 10;

if (lsd > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lsd);
}

else if (lsd == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lsd);
}

else if (lsd < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lsd);
}

return (0);
}
