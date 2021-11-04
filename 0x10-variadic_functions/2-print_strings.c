#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * Description: function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n - 1; i++)
		{
			s = va_arg(ap, char*);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
			if (separator != NULL)
				printf("%s", separator);
		}
		printf("%s", va_arg(ap, char*));
		printf("\n");
	}
	printf("\n");
}
