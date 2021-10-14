#include "main.h"
/**
 * _strncpy - copies a string.
 *
 * Description: copies a string.
 *
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;
	int c;

	while ((a < n) && (src[a] != '\0'))
	{
		dest[b] = src[a];
		b++;
		a++;
	}
	c = n - a;
	while (c > 0)
	{
		dest[b] = '\0';
		c--;
		b++;
	}
	return (dest);
}
