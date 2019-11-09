#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @ac: The index
 * @av: The arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fs, fde, nr, wr, cl, cl2;
	char *buf = malloc(1024);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);
	}

	fs = open(av[1], O_RDONLY);
	if (fs == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}

	fde = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fde == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	while ((nr = read(fs, buf, 1024)) != 0)
	{
		if (nr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		} wr = write(fde, buf, nr);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	} cl = close(fs), cl2 = close(fde);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fs), exit(100);
	}
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fde), exit(100);
	}
	return (0);
}
