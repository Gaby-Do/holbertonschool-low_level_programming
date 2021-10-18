#include "main.h"
/**
 ** _strchr - locates a character in a string.
 *
 * Description: locates a character in a string.
 *
 * @s: pointer
 * @c: char
 *
 * Return: pointer or NULL
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	if (c != '\0')
	{
		for (i = 0; s[i] != '\0' && s[i] != c; i++)
		{
		}
		if (s[i] == c)
		{
			p = &s[i];
		}
		else
		{
			p = '\0';
		}
	}
	else
	{
		p = '\0';
	}
	return (p);
}
