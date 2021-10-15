#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 *
 * Description: capitalizes all words of a string.
 *
 * @s: pointer
 * Return: s
 *
 * "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
 */
char *cap_string(char *s)
{
	int a;
	int l;
	char dic[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (a = 0; s[a] != '\0'; a++)
	{
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
