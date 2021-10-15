#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * Description: changes all lowercase letters of a string to uppercase.
 *
 * @s: pointer
 * Return: 0
 */
char *string_toupper(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
		if ((s[a] >= 97) && (s[a] <= 122))
		{
			s[a] = s[a] - 32;
		}
	}
	return (s);
}
