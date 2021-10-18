#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 *
 * Description: encodes a string using rot13
 *
 * @s: pointer
 * Return: pointer to s
 */
char *rot13(char *s)
{
	int x = 0; /*position in string s*/

	while (s[x] != '\0')
	{
		if (((s[x] >= 'a') && (s[x] <= 'z')) || ((s[x] >= 'A') && s[x] <= 'Z'))
		{
			s[x] = (s[x] + 13) + '0';
		}
		x++;
	}
	return (s);
}
