#include "main.h"

/**
  *print_last_digit - prints the last digit of a number
  *
  *Description: prints the last digit of a number.
  *
  *@n: integer
  *Return: 0
  */

int print_last_digit(int n)
{
	n = n % 10;
	if (n >= 0)
	{
		_putchar (n + '0');
		return (n);
	}
		else
		{
			n = n * -1;
			_putchar (n + '0');
			return (n);
		}
}
