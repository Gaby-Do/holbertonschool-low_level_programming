#include "main.h"

/**
  *times_table - prints the 9 times table, starting with 0.
  *
  *Description: prints the 9 times table, starting with 0.
  *
  *Return: 0
  */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		b = 0;
		while (b <= 9)
		{
			c = a * b;
			if (c < 10)
			{	_putchar (b + '0');
			}
			b++;
		}
	}
}

