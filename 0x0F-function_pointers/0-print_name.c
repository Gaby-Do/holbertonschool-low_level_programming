#include "function_pointers.h"
/**
 * print_name - prints a name.
 *
 * Description: prints a name.
 *
 * @name: name, string
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}