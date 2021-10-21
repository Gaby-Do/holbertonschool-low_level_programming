#include "main.h"
/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 *
 * Description: compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 *
 * @s1: pointer
 * @s2: pointer
 * Return: 0 for false, 1 for true
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (1);
	if ((s1 != 0 && s2 != 0) && (*s1 == *s2 || *s2 != '*'))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
