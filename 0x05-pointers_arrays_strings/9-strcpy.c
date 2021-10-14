include "main.h"
/**
 * _strcpy - copies string pointed to by src, including null byte (\0), to buffer pointed to by dest
 *
 * Description: copies string pointed to by src, including null byte (\0), to buffer pointed to by dest
 *
 * @dest: pointer
 * @src: pointer
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
