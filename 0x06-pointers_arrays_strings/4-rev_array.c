#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * Description: reverses the content of an array of integers
 *
 * @a: pointer
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	int aux;
	int start;
	int end;

	start = 0;
	end = n - 1;
	if (n > 0)
	{
		for (; start < n / 2;)
		{
			aux = a[start];
			a[start] = a[end];
			a[end] = aux;
			start = start + 1;
			end = end - 1;
		}
	}
}
