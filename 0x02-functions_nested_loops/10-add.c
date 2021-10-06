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
	_putchar ((c / 10) + '0');
	_putchar ((c % 10) + '0');
	_putchar ('\n');
	return (0);
}
