#include <stdio.h>
#include <stdlib>
/**
 *main-Eliminate recursively the numer dec and dec+1 units
 *Return: 0
 *
 */

int main(void)
{
int dec;
int unit;

for (dec = 48; dec <= 57; dec++)
{
for (unit = 49; unit <= 57; unit++)
{

if (dec != unit && dec < unit)
{
putchar(dec);
putchar(unit);
if (dec != 56 || unit != 57)
{
putchar(',');
putchar(' ');
}
}
}
unit = 49;
}
putchar('\n');
return (0);
}
