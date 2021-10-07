#include "main.h"

/**
  *print_line - draws a straight line in the terminal.
  *
  *@n: int
  *Return: 0
  */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar ('_');
		}
	}
	else
	{
		_putchar (10);
	}
}
