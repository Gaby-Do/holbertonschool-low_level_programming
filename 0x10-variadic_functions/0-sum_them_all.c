#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  function that returns the sum of all its parameters
 * Description:  function that returns the sum of all its parameters
 * @n: constant var = number of optional arguments
 * Return: suma or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int suma = 0;
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	for (; i < n; i++)
		suma += va_arg(ap, int);
	va_end(ap);
	return (suma);
}
