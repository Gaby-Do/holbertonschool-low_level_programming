#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string.
 *
 * Description:  returns the length of a string.
 *
 * @a: pointer
 * Return: integer
 */
int _strlen_recursion(char *a)
{
	if (*a == '\0')
		return ('\0');
	else
		return (_strlen_recursion(a + 1) + 1);
}

/**
 * _aux - palindrome si o no aux
 *
 * Description: auxiliar para palindrome
 *
 * @x: pointer
 * @y: pointer
 * Return: 0 or 1
 */
int _aux(char *x, char *y)
{

	if (x == y || y < x)
		return (1);
	if (*x == *y)
	{
		return (_aux(x + 1, y - 1));
	}
	return (0);
}

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 *
 * Description:  returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: pointer
 * Return: 0 for false, 1 for true
 */
int is_palindrome(char *s)
{
	int l;
	char *z;

	l = _strlen_recursion(s);
	if (l <= 1)
		return (1);
	if (*s == '\0')
		return (1);
	z = s + l - 1;
	return (_aux(s, z));
}
