#include <stdio.h>
#include <stdlib.h>
/**
 *main-ASCII
 *Return: 0
 */

int main(void)
{
int dec;
int unit;

for (dec = '0'; dec <= '9'; dec++)
{
for (unit = '0'; unit <= '9'; unit++)
{
putchar(dec);
putchar(unit);
if (!(dec == '9' && unit == '9'))
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}
