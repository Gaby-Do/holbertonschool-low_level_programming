#include "main.h"
#include "stdio.h"
/**
 * print_diagsums - prints sum of two diagonals of a square matrix of int.
 *
 * Description: prints sum of two diagonals of a square matrix of integers.
 *
 * @a: pointer
 * @size: integer
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = size - 1;
	int c1 = 0;
	int c2 = 0;

	while (x < size * size)
	{
		c1 = c1 + a[x];
		x = x + size + 1;
	}
	while (y < size * size - 1)
	{
		c2 = c2 + a[y];
		y = y + size - 1;
	}
	printf("%d, ", c1);
	printf("%d\n", c2);
}
