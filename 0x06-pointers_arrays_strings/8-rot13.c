#include <stdio.h>

/**
 * rot13 - Change letter for equivalent +13 letter
 * @str: Is the char array.
 * Return: The equivalent numbers
 */

char *rot13(char *str)
{
	int i, ind;

	char alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rot[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (ind = 0; alpha[ind] != '\0'; ind++)
		{
			if (str[i] == alpha[ind])
			{
				str[i] = rot[ind];
				break;
			}
		}
	}
	return (str);
}
