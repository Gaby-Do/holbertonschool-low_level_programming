#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * *string_nconcat - concatenates two strings.
 *
 * Description: concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: largo de s2 a concatenar
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0;
	unsigned int x;
	unsigned int a = 0;
	unsigned int b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b] != '\0')
		b++;
	if (n >= b)
		n = b;
	s3 = malloc(sizeof(char) * (a + n + 1));
	if (!s3)
		exit(0);
	while (i < a)
	{
		s3[i] = s1[i];
		i++;
	}
	x = 0;
	while (i < (a + n))
	{
		s3[i] = s2[x];
		i++;
		x++;
	}
	s3[i] = '\0';
	return (s3);
}
