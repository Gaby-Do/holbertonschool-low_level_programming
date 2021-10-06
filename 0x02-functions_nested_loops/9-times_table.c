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
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c <= 9)
			{
				_putchar (32);
				_putchar (c + '0');
				if (b == 9)
				{
					break;
				}
				_putchar (44);
				_putchar (32);
			}
			else
			{
				_putchar ((c / 10) + '0');
				_putchar ((c % 10) + '0');
				if (b == 9)
				{
					break;
				}
				_putchar (44);
				_putchar (32);
			}
		}
	_putchar (10);
	}
}
