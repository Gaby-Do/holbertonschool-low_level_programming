#include <stdio.h>
#include <stdlib.h>
/**
 * main -  adds positive numbers
 *
 * Description:  adds positive numbers
 *
 * @argc: integer
 * @argv: pointer
 * Return: 0 or 1 if wrong
 */
int main(int argc, char **argv)
{
	int i;
	int x;
	int y = 0;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			x = atoi(argv[i]);
			if (x == 0)
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
				y += atoi(argv[i]);
		}
		printf("%d\n", y);
	}
	else
	{
		if (argc == 1)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (argc == 2)
			printf("%s\n", "Error");
	}
	return (0);
}
