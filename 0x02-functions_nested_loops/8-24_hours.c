#include "main.h"

/**
  *jack_bauer - prints every minute of the day 00:00 to 23:59.
  *
  *Description: prints every minute of the day from 00:00 to 23:59.
  *
  *Return: 0
  */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a == 2 && b > 3)
				break;
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar (a + '0');
					_putchar (b + '0');
					_putchar (58);
					_putchar (c + '0');
					_putchar (d + '0');
					_putchar ('\n');
				}
			}
		}
	}
}
