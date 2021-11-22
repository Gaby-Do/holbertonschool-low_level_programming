#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename:  name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, l, wr;/*fd=file descriptor, l=largo del string, wr=chars written*/

	if (!filename)
		return (0);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	l = 0;
	while (text_content[l])
		l++;
	wr = write(fd, text_content, l);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
