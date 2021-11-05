#ifndef VARIADICFUNCTIONS_H
#define VARIADICFUNCTIONS_H
#include <stdarg.h>
/**
 * struct tipos - tipo de caracteres a imprimir,
 * asociados a la funcion que imprime
 * Description: tipo de caracteres a imprimir,
 * asociados a la funcion que imprime
 * @x: char
 * @f: pointer to funcion
 */
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
