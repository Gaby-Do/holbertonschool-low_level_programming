#include <stdio.h>
/**
 * main - prints all arguments it receives.
 *
 * Description: prints all arguments it receives.
 *
 * @argc: integer
 * @argv: pointer to an array of strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 1; i <= argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
