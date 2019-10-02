#include <stdio.h>

/**
 * _atoi - Check a string and convert to numbers.
 * @s: is the string parameter
 * Return: The operation of the int digit if has a minus.
 */
int _atoi(char *s)
{
	int minus = 1;
	unsigned int dig = 0;
	int i = 0;
	int ind;

	while (s[i] != '\0')
	{
		i++;
	}
	for (ind = 0; ind < i; ind++)
	{
		if (s[ind] == '-')
		{
			minus = minus * -1;
		}
		else if (s[ind] >= '0' && s[ind] <= '9')
		{
			dig = (dig * 10) + (s[ind] - '0');
		}
		else if (dig > 0)
		{
			break;
		}
	}
	return (dig * minus);
}
