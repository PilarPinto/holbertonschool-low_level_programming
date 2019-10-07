#include <stdio.h>

/**
 * _strspn- print the number of match
 * @s: the input array
 * @accept: The array char to compare
 * Return: i Number of matches.
 */


unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
