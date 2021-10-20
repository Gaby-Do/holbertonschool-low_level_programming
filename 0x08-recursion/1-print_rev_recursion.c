#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 *
 * Description: prints a string in reverse.
 *
 * @s: pointer
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	if (*s == '\0')
		_putchar(10);
}
