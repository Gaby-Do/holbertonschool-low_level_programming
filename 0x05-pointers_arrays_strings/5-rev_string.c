#include "main.h"
/**
 * rev_string - reverses a string
 *
 * Description: reverses a string
 *
 * @s: pointer
 */
void rev_string(char *s)
{
	int l = 0;
	char aux;
	int start;
	int end;

	while (s[l] != '\0')
	{
		l++;
	}
	start = 0;
	end = l - 1;
	if (l > 0)
	{
		for (; end != start && start + 1 != end;)
		{
			aux = s[start];
			s[start] = s[end];
			s[end] = aux;
			start++;
			end--;
		}
	}
}
