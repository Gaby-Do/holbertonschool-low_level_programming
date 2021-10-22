#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * Description: concatenates two strings
 *
 * @dest: pointer
 * @src: pointer
 * Return: pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int a = 0;

	while (dest[l] != '\0')
		l++;
	while (src[a] != '\0')
	{
		dest[l] = src[a];
		l++;
		a++;
	}
	return (dest);
}
