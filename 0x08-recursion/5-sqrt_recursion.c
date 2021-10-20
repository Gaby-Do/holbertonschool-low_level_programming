#include "main.h"
/**
 * _sqraux - auxiliar function that returns the square
 *
 * Description: auxiliar function that returns the square
 *
 * @a: int
 * @b: int, the root
 * Return: int
 */
int _sqraux(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (_sqraux(a, b + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * Description: returns the natural square root of a number
 *
 * @n: int
 * Return: -1 or int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (_sqraux(n, 0));
}
