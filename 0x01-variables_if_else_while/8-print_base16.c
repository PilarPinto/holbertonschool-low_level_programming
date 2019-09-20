#include <stdio.h>
/**
 *main-print the first 16 numbers with array
 *Return: 0
 */

int main(void)
{
int i;
char hex[16] = "0123456789abcdef";
char serie;

for (i = 0; i < 16; i++)
{
	serie = hex[i];
	putchar(serie);
}
putchar('\n');
return (0);
}
