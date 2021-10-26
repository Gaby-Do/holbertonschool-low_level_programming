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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')/*busco largo de s1*/
		x++;
	while (s1[y] != '\0')/*busco largo de s2*/
		y++;
	s3 = malloc((sizeof(char) * (x + 1 + y + 1)));/*pido memoria para s3*/
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
