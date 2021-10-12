#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * Description: prints every other character of a string
 *
 * @str: pointer
 */
void puts2(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar (str[l]);
		l = l + 2;
	}
	_putchar (10);
}
