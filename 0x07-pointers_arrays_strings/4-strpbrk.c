#include <stdio.h>

/**
 * _strpbrk - prints when the char match
 * @s: the destinity array
 * @accept: The source array
 * Return: Cutted array.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				return (s);
			}
		}
	}
	return (0);
}
