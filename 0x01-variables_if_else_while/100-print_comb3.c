#include <stdio.h>

/**
 *
 *Eliminate recursively the numer dec and dec+1 units
 *Return: 0
 */

int main(void)
{
int dec;
int unit;

for (dec = '0'; dec <= '9'; dec++)
{
for (unit = '1'; unit <= '9'; unit++)
{

if (dec != unit && dec < unit)
{
putchar(dec);
putchar(unit);
if (dec != '8' || unit != '9')
{
putchar(',');
putchar(' ');
}
}
}
unit = '1';
}
putchar('\n');
return (0);
}
