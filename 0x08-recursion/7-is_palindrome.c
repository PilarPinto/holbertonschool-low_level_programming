#include <stdio.h>
/**
 * found_len - Look for a number coincident.
 * @s: The string to analize
 * Return: the len of the string
 */
int found_len(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (found_len(s) + 1);
}

/**
 * look_sim - Look for a element coincidence.
 * @s: The string
 * @len: The length of the string
 * Return: the condition if is palindrome
 */


int look_sim(char *s, int len)
{
	if (*s != s[len])
		return (0);
	else if (*s == '\0')
		return (1);
	return (look_sim(s + 1, len - 2));
}

/**
 * is_palindrome - Define a string like palindrome.
 * @s: The string
 * Return: If is palindrome
 */

int is_palindrome(char *s)
{
	int a, b;

	a = found_len(s);
	b = look_sim(s, a - 1);
	return (b);
}
