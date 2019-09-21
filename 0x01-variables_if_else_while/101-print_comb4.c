#include <stdio.h>
#include <stdlib.h>
/**
 *main-ASCII with cent, dec and units
 *Return: 0
 */

int
main(void)
{
int cent;
int dec;
int unit;

for (cent = 48; cent <= 57; cent++)
{
	for (dec = 48; dec <= 57; dec++)
	{
		for (unit = 48; unit <= 57; unit++)
		{
			if (cent < dec && dec < unit)
			{
				putchar (cent);
				putchar (dec);
				putchar (unit);
				if (!(cent == 55 && dec == 56 && unit == 57))
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
}

putchar ('\n');
return (0);
}
