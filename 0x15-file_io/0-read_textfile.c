#include "holberton.h"
/**
 * read_textfile - Funtion to open and read
 * @filename: Is the file to read
 * @letters: Is the amount of characters in the text
 * Return: The letters and the number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, nr, wr;

	buf = malloc(sizeof(char) * letters);

	if (filename == NULL || buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

/*	nr = read (fd, &word, sizeof (unsigned long));*/
	nr = read(fd, buf, letters);
	if (nr == -1)
	{
		return (0);
	}
/*write(int fd, const void *buf, size_t count)*/
	wr = write(STDOUT_FILENO, buf, nr);
/*Is the POSIX*/
	if (wr == -1)
	{
		return (0);
	}

	close(fd);
	return (wr);
}
