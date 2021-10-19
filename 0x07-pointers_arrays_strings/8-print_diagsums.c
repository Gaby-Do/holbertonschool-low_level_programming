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
	int x, y, c1, c2;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
			{
				c1 = c1 + a[(x * size) + y];
				break;
			}
		}
		for (y = 0; y < size; y++)
		{
			if (y == size - x)
			{
				c2 = c2 + a[(x * size) + y];
				break;
			}
		}
	}
	printf("%d, ", c1);
	printf("%d\n", c2);
}
