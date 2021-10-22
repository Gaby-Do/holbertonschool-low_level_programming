#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 *
 * Description: prints its name, followed by a new line.
 *
 * @argc: integer
 * @argv: pointer to an array of strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
