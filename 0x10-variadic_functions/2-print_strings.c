#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * Description: function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	va_list ap;

	va_start(ap, n);

