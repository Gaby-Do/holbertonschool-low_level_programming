#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	unsigned long int x = 1, y = 2, z = 0;
	int i = 2;

	printf("%lu, ", x);
	printf("%lu, ", y);
	while (i <= 50)
	{
		if (i <= 50)
		{
			z = x + y;
			printf("%lu", z);
			x = y;
			y = z;
			i++;
			if (i < 50)
				printf(", ");
			else
			{
				printf("\n");
				return (0);
			}
		}
	}
	return (0);
}
