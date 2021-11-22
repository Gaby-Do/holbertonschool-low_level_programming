#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, l, wr;/*fd=file descriptor, l=largo del string, wr=chars written*/

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);
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
