#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * Description: prints half of a string
 *
 * @str: pointer
 */
void puts_half(char *str)
{
	int l = 0;/*largo del string*/
	int a = 0;

	while (str[l] != '\0')/*averiguo el largo*/
	{
		l++;
	}
	/*l--;*/
	if (l % 2 == 0)
	{
		a = l / 2;
		l--;
		while (a <= l)
		{
			_putchar (str[a]);
			a++;
		}
	}
	else
	{
		a = (l + 1) / 2;
		while (a <= l)
		{
			_putchar (str[a]);
			a++;
		}

	_putchar (10);
	}
}
