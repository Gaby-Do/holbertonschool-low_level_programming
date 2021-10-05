#include "main.h"

/**
  *_isalpha - checks for alphabetic character.
  *
  *Description: checks for alphabetic character.
  *
  *@c: entra un caracter
  *Return: 0
  */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
