#include "main.h"
/**
 * _strcpy - copies string pointed by src, to buffer pointed by dest
 *
 * Description: copies string pointed by src, to buffer pointed by dest
 *
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}
