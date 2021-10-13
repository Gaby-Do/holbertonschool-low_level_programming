#include <stdio.h>
#include "main.h"
/**
 * print_array -  prints n elements of an array of integers
 *
 * Description:  prints n elements of an array of integers
 *
 * @a: pointer
 * @n: integer
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int l = 0;/*largo del string*/
	int aux = 0;

	while (a[l] != '\0')/*averiguo el largo*/
	{
		l++;
	}
	if ((l >= 2) && (n > 0) && (n < l))
	{
		while (aux < n - 1)
		{
			printf("%d, ", a[aux]);
			aux++;
		}
		printf("%d", a[n - 1]);
		printf("\n");
	}
}
