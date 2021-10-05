#include "main.h"

/**
  *print_alphabet_x10 - prints _putchar, followed by a new line
  *
  *Description: prints _putchar, followed by a new line
  *
  *Return: 0
  */

void print_alphabet_x10(void)
{
	int alfa;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (alfa = 'a'; alfa <= 'z'; alfa++)
		{
			_putchar(alfa);
		}
		_putchar('\n');
	}
}
