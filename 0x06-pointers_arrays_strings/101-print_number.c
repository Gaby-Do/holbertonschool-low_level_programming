#include "main.h"
/**
 * print_number - prints an integer
 *
 * Description: prints an integer
 *
 * @n: integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar ('-');
		/*n = -n;*/
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar (a % 10 + '0');
}
