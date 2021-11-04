#ifndef VARIADICFUNCTIONS_H
#define VARIADICFUNCTIONS_H
#include <stdarg.h>
typedef struct tipos
{
	char x;
	void (*f)(va_list);
} tipos;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
