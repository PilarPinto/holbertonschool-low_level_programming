#include <stdio.h>

/**
 * main - Using decrement for print
 * an alphabet mirror
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'z' ; ch >= 'a' ; ch--)
	putchar(ch);
putchar('\n');
return (0);
}
