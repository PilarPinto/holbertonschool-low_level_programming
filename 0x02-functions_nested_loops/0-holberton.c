#include "holberton.h"
/**
*main-print the first 9 letters of Holberton with an array
*Return: 0
*/
 
int main(void)
{
	int i;
	char letters[9] = "Holberton";
	char name;

	for (i = 0; i < 9; i++)
	{
                name = letters[i];
                _putchar(name);
	}
	_putchar('\n');
	return (0);
}
