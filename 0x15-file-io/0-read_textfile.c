#include "main.h"
/**
 * read_textfile - reads a text file and prints it to std output
 * @filename: file to open and read
 * @letters: number of letters it should read and print
 * Return: number of letters printed or 0 on fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t countrd = 0;/*counts chars read*/
	ssize_t countwr = 0;/*counts chars writen*/
	char *str;/*pointer to buffer to read an write in/from*/
	int fd;/*file descriptor*/

	if (!filename)
		return (0);
	str = malloc(letters);
	if (!str)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	countrd = read(fd, str, letters);
	close(fd);
	if (countrd < 0)
	{
		countrd = 0;
		free(str);
		return (0);
	}
	countwr = write(STDOUT_FILENO, str, countrd);
	if (countwr < 0)
	{
		free(s);
		return (0);
	}
	free(s);
	return (countwr);
}
