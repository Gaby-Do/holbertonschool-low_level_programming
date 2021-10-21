#include "main.h"
/**
 * _primeaux - funcion auxiliar para tener e incrementar  un divisor
 *
 * Description: auxiliar para tener e incrementar un divisor
 *
 * @a: int
 * @b: int
 * Return: 1 o 0
 */
int _primeaux(int a, int b)
{
	if (b < a && a % b == 0)
		return (0);
	if (a == b)
		return (1);
	return (_primeaux(a, b + 1));
}

/**
 * is_prime_number -  returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * Description:  returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (_primeaux(n, 2));
}
