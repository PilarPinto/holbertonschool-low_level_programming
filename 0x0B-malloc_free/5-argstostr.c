#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *_strcat- Concatenate two strings.
* @dest: Is the char array with 98 slots.
* @src: Is the source array that want to storage in dest
* Return: Dest string.
*/
 char *_strcat(char *dest, char *src)
 {

	 int i = 0, ind;

	 while (dest[i] != '\0')
	 {
		 i++;
	 }
	 for (ind = 0; src[ind] != '\0'; ind++)
	 {
		 dest[i++] = src[ind];
	 }
	 return (dest);
 }
/**
 * argstostr - Liberate reserved space
 * @ac: Is the element counter
 * @av: Is the element slack
 *
 * Return: Pointer to new strig.
 */
char *argstostr(int ac, char **av)
{
	int indi, indj, counter;
       	char *ar, *tabu;

	if(ac == 0 || av == NULL)
	{
		return(NULL);
	}
	else
	{
		counter = 0;
		for (indi = 0; indi < ac ; indi++)
		{
			for (indj = 0; av[indi][indj] != '\0'; indj++)
			{
				counter++;
			}
			counter++;
		}

		ar = malloc(counter * sizeof(char) + 1);
		tabu = "\n";

		for (indi = 0; indi < ac ; indi++)
		{
			ar = _strcat(ar, av[indi]);
			if(ar == NULL)
				return (NULL);
			if ((indi + 1) < ac)
			{
				ar = _strcat(ar, tabu);
				if(ar == NULL)
					return (NULL);
			}
		}
	}
	ar = _strcat(ar, tabu);
	if(ar == NULL)
		return (NULL);
	return (ar);
}
