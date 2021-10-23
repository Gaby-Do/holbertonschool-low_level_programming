#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change.
 *
 * Description: prints the minimum number of coins to make change.
 *
 * @argc: integer
 * @argv: pointer
 * Return: integer
 */
int main(int argc, char **argv)
{
	int x = 0;
	int num;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (atoi(argv[1]))
		num = atoi(argv[1]);
	if (num < 0)
		printf("%d\n", 0);
	else
	{
		x = num / 25;
		num = num % 25;
		x += num / 10;
		num = num % 10;
		x += num / 5;
		num = num % 5;
		x += num / 2;
		num = num % 2;
		x += num % 2;
	}
		printf("%d\n", x);
	return (x);
}
