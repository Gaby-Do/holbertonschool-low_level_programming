#include "main.h"

/**
  *print_triangle - prints a triangle
  *
  *Return: 0
  */
void print_triangle(int size)
{	
	int a, b, c;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= (size - a); b++)
		{
			_putchar (' ');
		}
		for (c = 1; c <= a; c++)
		{
			_putchar ('#');
		}
		_putchar (10);
	}
	if (size <= 0)
	{
		_putchar (10);
	}
}
