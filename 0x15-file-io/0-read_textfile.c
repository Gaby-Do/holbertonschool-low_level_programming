#include "main.h"
/**
 * read_textfile - reads a text file and prints it to std output
 * @filename: file to open and read
 * @letters: number of letters it should read and print
 * Return: number of letters printed or 0 on fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd = 0;/*counts chars read*/
	int wr = 0;/*counts chars writen*/
	char *buf;/*pointer to buffer to read an write in/from*/
	int fd;/*file descriptor*/

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (wr);
}
