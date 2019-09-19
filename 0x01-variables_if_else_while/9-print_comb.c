#include <stdio.h>

/**
 *main-ASCII
 *Return: 0
 */

int main(void)
{
int i;
char space = 32;
char comma = 44;

i = '0';
while (i <= '9')
{
putchar(i);
if (i != '9')
{
putchar(comma);
putchar(space);
}

i++;
}
putchar('\n');
return (0);
}
