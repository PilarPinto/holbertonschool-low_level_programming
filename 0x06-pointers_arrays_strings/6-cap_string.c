#include <stdio.h>

/**
 * cap_string - Capital letters.
 * @str: Is the char array.
 * Return: Array with Capital
 */
char *cap_string(char *str)
{
	char condi[] = {'\t', ' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
			'{', '}'};
	int i = 0, ind;

	while (str[i] != '\0')
	{
		for (ind = 0; condi[ind] != '\0'; ind++)
		{
			if (str[i] == condi[ind] && str[i + 1] >= 'a'
			    && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
			else if (i == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
