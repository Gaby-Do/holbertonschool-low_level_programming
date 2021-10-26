#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings
 *
 * Description: function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to final string or NULL on fail
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0;
	int y = 0;
	int i = 0;
	char *s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[x] != '\0')
		x++;
	while (s1[y] != '\0')
		y++;
	s3 = malloc((sizeof(char) * (x + 1)) + (sizeof(char) * (y + 1)));
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	x = i;
	i = 0;
	while (s2[i] != '\0')
	{
		s3[x] = s2[i];
		x++;
		i++;
	}
	s3[x + 1] = '\0';
	return (s3);
}
