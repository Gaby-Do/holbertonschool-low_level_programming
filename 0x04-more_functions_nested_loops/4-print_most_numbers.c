#include "main.h"

/**
  *print_most_numbers - prints the numbers, from 0 to 9, Do not print 2 and 4
  *
  *Return: 0
  */
void print_most_numbers(void)
{
	char a;

	for (a = 48; a <= 57; a++)
	{
		if (a != '2' && a != '4')
		{
			_putchar (a);
		}
	}
	_putchar (10);
	
}
