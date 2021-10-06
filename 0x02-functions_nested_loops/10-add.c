#include "main.h"

/**
  *add- adds two integers and returns the result.
  *
  *Description: adds two integers and returns the result.
  *
  *@a: integer
  *@b: integer
  *Return: 0
  */

int add(int a, int b)
{
	int c;

	c = 0;
	c = a + b;
	if (c >= 0 && c < 10)
	{
		_putchar ((c % 10) + '0');
		_putchar ('\n');
	}
	if (c < 0 && c > -10)
	{
		c = c * (-1);
		_putchar (45);
		_putchar ((c % 10) + '0');
		_putchar ('\n');
	}
	if (c > 9 || c < -9)
	{
		_putchar ((c / 10) + '0');
		_putchar ((c % 10) + '0');
		_putchar ('\n');
	}
	return (0);
}
