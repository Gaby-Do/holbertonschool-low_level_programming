#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	unsigned long int x = 1;
	unsigned long int y = 2;
	unsigned long int z = 0;
	int i = 2;

	printf("%li, ", x);
	printf("%li, ", y);
	while (i <= 50)
	{
		z = x + y;
		printf("%li", z);
		if (i < 50)
			printf(", ");
		i++;
		x = y + z;
		printf("%li", x);
		if (i < 50)
			printf(", ");
		i++;
		y = z + x;
		printf("%li", y);
		if (i < 50)
			printf(", ");
		i++;
		if (i == 50)
			printf("\n");
	}
	return (0);
}
