#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * Description: prints a string, in reverse
 *
 * @s: puntero
 */
void print_rev(char *s)
{
	int largo = 0;

	while (s[largo] != '\0')
	{
		largo++;
	}
	while (largo >= 0)
	{
		_putchar (s[largo]);
		largo--;
	}
	_putchar (10);
}
