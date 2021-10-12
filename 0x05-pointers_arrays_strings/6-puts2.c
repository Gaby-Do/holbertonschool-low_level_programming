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
	int a = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	l--;
	while (a <= l)
	{
		_putchar (str[a]);
		a = a + 2;
	}
	_putchar (10);
}
