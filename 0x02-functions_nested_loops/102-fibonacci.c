#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	long long int x = 1, y = 2, z = 0;
	int i = 2;

	printf("%lld, ", x);
	printf("%lld, ", y);
	while (i <= 50)
	{
		if (i <= 50)
		{
			z = x + y;
			printf("%lld", z);
			i++;
			if (i < 50)
				printf(", ");
			else
			{
				printf("\n");
				return (0);
			}
		}
		if (i <= 50)
		{
			x = y + z;
			printf("%lld", x);
			i++;
			if (i < 50)
				printf(", ");
			else
			{
				printf("\n");
				return (0);
			}
		}
		if (i <= 50)
		{
			y = z + x;
			printf("%lld", y);
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
}