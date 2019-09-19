#include <stdio.h>

/**
 *main-ASCII
 *Return: 0
 */

int main(void)
{
int num;
char space = 32;
char comma = 44;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num != '9')
{
putchar(comma);
putchar(space);
}

}
putchar('\n');
return (0);
}
