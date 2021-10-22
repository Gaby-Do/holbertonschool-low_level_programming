#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 *
 * Description: multiplies two numbers.
 *
 * @argc: integer
 * @argv: pointer
 * Return: integer
 */
int main(int argc, char **argv)
{
	int x = 1;
	int i;

	for (i = 1; i < argc; i++)
	{
		x *= atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}
