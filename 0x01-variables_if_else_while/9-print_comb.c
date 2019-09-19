#include <stdio.h>

/**
 * main - ASCII
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
char num;
char space = 32;
char comma = 44;
for (num = '0' ; num <= '9' ; num++)
{
putchar(num);
putchar(comma);
putchar(space);
}
putchar('\n');
return (0);
}
