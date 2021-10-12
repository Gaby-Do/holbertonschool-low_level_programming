#include "main.h"
/**
 * _puts - prints a string
 *
 * Description - prints a string
 *
 * @str: puntero
 */
void _puts(char *str)
{
	int largo;

	largo = 0;
	while (str[largo] != '\0')
	{
		_putchar (str[largo]);
		largo++;
	}
	_putchar (10);
}
