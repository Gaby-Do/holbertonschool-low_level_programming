#include "main.h"
#include <stdio.h>
/**
 * *leet - encodes a string into 1337
 *
 * @s: pointer
 * Return: s
 */
char *leet(char *s)
{
	int x = 0;
	int y = 0;
	char s1[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int s2[] = {4, 3, 0, 7, 1, 4, 3, 0, 7, 1};

	while (s[x] != '\0')
	{
		for (y = 0; s1[y] != '\0'; y++)
		{
			if (s[x] == s1[y])
			{
				s[x] = (s2[y] + '0');
			}
		}
		x++;
	}
	return (s);
}
