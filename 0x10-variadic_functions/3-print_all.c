#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - prints a char
 * Description: prints a char
 * @argumentos: argumentos a imprimir
 */
void print_char(va_list argumentos)
{
	printf("%c", va_arg(argumentos, int));
}
/**
 * print_int - prints an integer
 * Description: prints an integer
 * @argumentos: argumentos a imprimir
 */
void print_int(va_list argumentos)
{
	printf("%d", va_arg(argumentos, int));
}
/**
 * print_float - prints a float
 * Description: prints a float
 * @argumentos: argumentos a imprimir
 */
void print_float(va_list argumentos)
{
	printf("%f", va_arg(argumentos, double));
}
/**
 * print_str - prints a string
 * Description: prints a string
 * @argumentos: argumentos a imprimir
 */
void print_str(va_list argumentos)
{
	char *p = va_arg(argumentos, char*);

	if (!p)
	{
		printf("(nil)");
		return;
	}
	printf("%s", p);
}
/**
 * print_all -  function that prints anything
 * Description:  function that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list argumentos;
	int i = 0;
	int j = 0;
	char *a = "";
	tipos frmt[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL},
	};

	va_start(argumentos, format);
	while (format && format[i])
	{
		j = 0;
		while (frmt[j].x)
		{
			if (format[i] == frmt[j].x)
			{
				printf("%s", a);
				frmt[j].f(argumentos);
			}
			j++;
		}
		i++;
		a = ", ";
	}
	va_end(argumentos);
	printf("\n");
}
