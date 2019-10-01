#include "holberton.h"
/**
 * rev_string - Using a variable to replace the string.
 * @s: The param of the string
 *
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	while (s[i])
	{
		len++;
		i++;
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
