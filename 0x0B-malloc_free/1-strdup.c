#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * Description:  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: pointer to string
 * Return: NULL or pointer to new string
 */
char *_strdup(char *str)
{
	char *p;
	int l = 0;
	int i = 0;

	while (str[l] != '\0')
		l++;
	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(char) * (l + 1));
	if (p == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
