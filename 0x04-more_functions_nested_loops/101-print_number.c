#include "main.h"
/**
 * print_number - prints an integer using putchar
 *
 * @n: entero
 *
 * Return: 0
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar ('0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
		}
		if ((n / 1000) != 0)
		{
			_putchar ((n / 1000) + '0');
			_putchar (((n % 1000) / 100) + '0');
			_putchar ((((n % 1000) % 100) / 10) + '0');
			_putchar ((((n % 1000) % 100) % 10) + '0');
		}
		else
		{
			if ((n / 100) != 0)
			{
				_putchar ((n / 100) + '0');
				_putchar (((n % 100) / 10) + '0');
				_putchar (((n % 100) % 10) + '0');
			}
			else
			{
				_putchar ((n / 10) + '0');
				_putchar ((n % 10) + '0');
			}
		}
	}
}