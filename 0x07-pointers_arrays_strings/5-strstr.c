#include <stdio.h>

/**
 * _strstr - check the string to found a pattern.
 * @haystack: The large string
 * @needle: The string to compare
 * Return: The new haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *begin = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return (begin);
		}
		haystack = begin + 1;
	}
	return ('\0');
}
