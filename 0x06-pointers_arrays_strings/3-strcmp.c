#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * Description: compares two strings
 *
 * @s1: pointer
 * @s2: pointer
 * Return: 0 if equal, negtive if s1<s2, positive if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while ((s1[a] == s2[b]) && (s1[a] != '\0') && (s2[a] != '\0'))
	{
		a++;
		b++;
	}
	c = s1[a] - s2[a];
	return (c);
}
