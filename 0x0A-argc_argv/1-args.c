#include <stdio.h>
/**
 * main -  prints the number of arguments passed into it.
 *
 * main:  prints the number of arguments passed into it.
 *
 * @argc: integer
 * @argv: pointer to an array of strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) **argv;

	printf("%d\n", argc - 1);
	return (0);
}
