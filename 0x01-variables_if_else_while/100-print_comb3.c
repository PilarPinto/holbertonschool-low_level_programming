#include <stdio.h>
#include <stdlib.h>
/**
 *main-ASCII with dec and units
 *Return: 0
 */

int
main(void)
{
	int dec;
	int unit;

	for (dec = 48; dec <= 57; dec++)
	{
		for (unit = '0'; unit <= '9'; unit++)

		{
			if (dec < unit)
			{
				putchar (dec);
				putchar (unit);
				if (!(dec == '8' && unit == '9'))
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}

	putchar ('\n');
	return (0);
}
