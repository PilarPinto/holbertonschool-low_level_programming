#include <stdio.h>
#include <stdlib.h>
/**
 *main-ASCII with cent, dec and units
 *Return: 0
 */

int
main(void)
{
int dec1;
int unit1;
int dec2;
int unit2;
for (dec1 = 48; dec1 <= 57; dec1++)
{
	for (unit1 = 48; unit1 <= 57; unit1++)
	{
		for (dec2 = 48; dec2 <= 57; dec2++)
		{
			for (unit2 = 48; unit2 <= 57; unit2++)
			{
				if (unit1 < unit2 && dec1 <= dec2)
				{
					putchar (dec1);
					putchar (unit1);
					putchar (' ');
					putchar (dec2);
					putchar (unit2);
					if (!(dec1 == 57 && unit1 == 56 && dec2 == 57 && unit2 == 57))
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
	}
}
putchar ('\n');
return (0);
}
