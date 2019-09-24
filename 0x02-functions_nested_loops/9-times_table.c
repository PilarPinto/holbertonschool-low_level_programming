#include "holberton.h"

/**
 *times_table- Show recursevly the times table
 * void type
 *
 */
void times_table(void)
{
	int mul, multy, times;

	for (mul = 0; mul <= 9; mul++)
	{
		for (multy = 0; multy <= 9; multy++)
		{
			times = mul * multy;
			if (multy == 0 && times < 10)
			{
				_putchar((times) + '0');
			}
			else if (mul == 0 && multy != 0)
			{
				_putchar(' ');
				_putchar((times) + '0');
			}
			else if (times < 10)
			{
				_putchar(' ');
				_putchar((times) + '0');
			}
			else
			{
				_putchar(((times) / 10) + '0');
				_putchar(((times) % 10) + '0');
			}
			if (multy < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

_putchar('\n');
	}
}
