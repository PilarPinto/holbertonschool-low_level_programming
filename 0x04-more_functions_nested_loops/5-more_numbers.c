#include "holberton.h"
/**
 * more_numbers - Print dec and units for  1 to 14.
 *
 * No return.
 */
void more_numbers(void)
{
	int number;
	int a = 0;

	while (a < 10)
	{
		for (number = 0 ; number <= 14 ; number++)
		{
			if (number > 9)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
		}
		_putchar('\n');
		a++;
	}
}
