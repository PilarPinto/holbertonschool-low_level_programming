#include <stdio.h>

/**
 * leet - Change letter for equivalent
 * @s: Is the char array.
 * Return: The equivalent numbers
 */

char *leet(char *s)
{
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	int i = 0, ind = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ind = 0; letter[ind] != '\0'; ind++)
		{
			if (s[i] == letter[ind])
				s[i] = number[ind];
		}
	}
	return (s);
}
