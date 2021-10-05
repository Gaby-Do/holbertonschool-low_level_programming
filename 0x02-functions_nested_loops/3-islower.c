#include "main.h"

/**
  *_islower - prints _putchar, followed by a new line
  *
  *Description: prints _putchar, followed by a new line
  *
  *@c: entrq un caracter
  *Return: 0
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
