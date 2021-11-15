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
		i++;
		if (i < 50)
			printf(", ");
		x = y + z;
		printf("%li", x);
		i++;
		if (i < 50)
			printf(", ");
		y = z + x;
		printf("%li", y);
		i++;
		if (i < 50)
			printf(", ");
		if (i == 50)
			printf("\n");
	}
	return (0);
}
