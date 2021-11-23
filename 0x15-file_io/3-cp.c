#include "main.h"
#include <stdio.h>
/**
 * main - copies the content of a file to another file.
 * @argc: int, should be 3 (name of program, file_from and file_to)
 * @argv: list of arguments
 * Return: 0 if ok
 */
int main(int argc, char **argv)
{
	int file_from, file_to;/*file descriptors*/
	int f_rd;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	while ((f_rd = read(file_from, buffer, 1024)) > 0)
	{
		if (write(file_to, buffer, f_rd) != f_rd)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
				exit(99);
	}
	if (f_rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from),
			exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to),
			exit(100);
	return (0);
}
