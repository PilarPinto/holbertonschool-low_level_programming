#include <stdio.h>
#include <stdlib.h>
/**
 *main-Print a series of number combined with symbols
 *Return: 0
 */

int main(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
	putchar(num);
	if (num != '9')
	{
	putchar(',');
	putchar(' ');
	}


}
putchar('\n');
return (0);
}
