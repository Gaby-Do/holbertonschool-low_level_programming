#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * Description: returns the length of a string
 *
 * @s: pointer
 * Return: entero
 */
int _strlen(char *s)
{
	int largo = 0;

	while (s[largo] != '\0')
		largo++;
	return (largo);
}
