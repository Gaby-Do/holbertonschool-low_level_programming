#include "main.h"

/**
  *print_to_98- prints all natural numbers from n to 98
  *
  *Description: prints all natural numbers from n to 98
  *
  *@n: integer
  *Return: 0
  */

void print_to_98(int n)
{
	int a;

	a = 0;
	while (a <= 98)
	{
		a++;
		for (n = 0; n <= 98; n++)
		{
			if (n >= 0 && n < 10)
			{
				_putchar (n + '0');
				_putchar (44);
				_putchar (32);
			}	
			else
			{
				if (n < 98)
				{
					_putchar ((n / 10) + '0');
					_putchar ((n % 10) + '0');
					_putchar (44);
					_putchar (32);
				}
				else
				{
					_putchar ((n / 10) + '0');
					_putchar ((n % 10) + '0');
				}
			}
		}
	}
}
