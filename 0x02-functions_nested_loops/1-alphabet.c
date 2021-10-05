#include "main.h"

/**
  *print_alphabet - prints _putchar, followed by a new line
  *
  *Description: prints _putchar, followed by a new line
  *
  *Return: 0
  */

void print_alphabet(void)
{
	int alfa;

	for (alfa = 'a'; alfa <= 'z'; alfa++)
	{
		_putchar(alfa);
	}
	_putchar('\n');
}
