#include <stdio.h>
/**
 *main-Using a void function to print alphabet
 *Return: 0
 */
int main(void)
{
print_alphabet();
getchar ();
return (0);
}


void print_alphabet(void)
{
char ch;

for (ch = 'a'; ch < 'z'; ch++)
putchar (ch);
putchar ('\n');
}
