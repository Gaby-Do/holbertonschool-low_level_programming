#include "main.h"
/*
 * swap_int - swaps the values of two integers
 *
 * @a - pointer
 * @b: pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
