#include <stdio.h>
/**
 *main-Using a void function to print alphabet 10 times
 *Return: 0
 */

int main(void)
{
print_alphabet_x10();
return (0);
}


void print_alphabet_x10(void)
{
	char ch;
	int c = 0;

	while (c < 10)
	{
		for (ch = 'a'; ch < 'z'; ch++)
			putchar (ch);
		putchar ('\n');
		c++;
	}
}
