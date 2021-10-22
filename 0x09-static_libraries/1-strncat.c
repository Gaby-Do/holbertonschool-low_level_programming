#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * Description: concatenates two strings if while destiny has room.
 *
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int a = 0;

	while (dest[l] != '\0')
		l++;
	while ((a < n) && (src[a] != '\0'))
	{
		dest[l] = src[a];
		l++;
		a++;
	}
	dest[l] = '\0';
	return (dest);
}
