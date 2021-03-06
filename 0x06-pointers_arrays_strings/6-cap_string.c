#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 *
 * Description: capitalizes all words of a string.
 *
 * @s: pointer
 * Return: s
 *
 */
char *cap_string(char *s)
{
	int a;
	int l;
	char dic[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (a = 0; s[a] != '\0'; a++)
	{
		if ((s[0] >= 97) && (s[0] <= 122))
		{
			s[0] = s[0] - 32;
			continue;
		}
		for (l = 0; l < 13; l++)
		{
			if (s[a] == dic[l])
			{
				if ((s[a + 1] >= 97) && (s[a + 1] <= 122))
				{
					s[a + 1] = s[a + 1] - 32;
				}
				break;
			}
		}
	}
	return (s);
}
