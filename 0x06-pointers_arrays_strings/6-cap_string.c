#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 *
 * Description: capitalizes all words of a string.
 *
 * @s: pointer
 * Return: s
 */
char *cap_string(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
		if ((s[a - 1] < 97) || (s[a - 1] > 122))
		{
			if ((s[a - 1] <= 65) || (s[a - 1] >= 92))
			{
				if ((s[a] >= 97) && (s[a] <= 122))
				s[a] = s[a] - 32;
			}
		}
	}
	return (s);
}
