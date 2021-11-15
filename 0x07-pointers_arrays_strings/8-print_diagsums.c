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
	int y = size - 1;/*la ubico en l ultima posicion de la priera fila*/
	int c1 = 0;
	int c2 = 0;

	while (x < size * size)/*suma la diagonal de izq a derecha*/
	{
		c1 = c1 + a[x];
		x = x + size + 1;
	}
	while (y < size * size - 1)/*suma digonal de derecha a izq*/
	{
		c2 = c2 + a[y];
		y = y + size - 1;
	}
	printf("%d, ", c1);
	printf("%d\n", c2);
}
