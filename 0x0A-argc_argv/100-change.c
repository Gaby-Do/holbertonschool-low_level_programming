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
		while (num > 0)
		{
			x++;
			if ((num - 25) >= 0)
			{
				num -= 25;
				continue;
			}
			if ((num - 10) >= 0)
			{
				num -= 10;
				continue;
			}
			if ((num - 5) >= 0)
			{
				num -= 5;
				continue;
			}
			if ((num - 2) >= 0)
			{
				num -= 2;
				continue;
			}
			if ((num - 1) >= 0)
			{
				num -= 2;
				continue;
			}
		}
		printf("%d\n", x);
	}
	return (x);
}
