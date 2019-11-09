#include "holberton.h"
/**
 * create_file - Funtion to create and write the file
 * @filename: Is the file to read
 * @text_content: Is the amount of characters in the text
 * Return: The letters and the status
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, ind = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[ind] != 0)
		ind++;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, ind);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
