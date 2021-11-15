#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int x = 1;
	int y = 2;
	int z = 0;
	int i = 2;

	printf("%d, ", x);
	printf("%d, ", y);
	while (i <= 50)
	{
		z = x + y;
		printf("%d", z);
		if (i < 50)
			printf(", ");
		x = y + z;
		printf("%d", x);
		if (i < 50)
			printf(", ");
		y = z + x;
		printf("%d", y);
		if (i < 50)
			printf(", ");
		if (i == 50)
			printf("\n");
		i++;
	}
	return (0);
}
