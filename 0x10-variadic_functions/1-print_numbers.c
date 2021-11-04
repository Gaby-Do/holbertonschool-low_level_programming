#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * Description: function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (; i < n; i++)
			printf("%d", va_arg(ap, unsigned int));
		printf("\n");
	}
	else
	{
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(ap, unsigned int), separator);
		printf("%d\n", va_arg(ap, unsigned int));
	}
	va_end(ap);
}
