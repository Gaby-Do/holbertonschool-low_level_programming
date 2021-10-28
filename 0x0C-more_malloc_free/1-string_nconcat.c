#include <stdlib.h>
#include "main.h"
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
	int i = 0;
	int a = 0;
	int b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
