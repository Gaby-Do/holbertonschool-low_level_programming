#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * Description: gets the length of a prefix substring
 *
 * @s: pointer
 * @accept: pointer
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				x++;
				break;
			}
		}
		if ((accept[j] == '\0') && (x > 0))
		{
			return (x);
		}
	}
	return (x);
}
