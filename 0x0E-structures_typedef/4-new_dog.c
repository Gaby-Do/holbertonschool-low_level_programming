#include "dog.h"
#include <string.h>
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

	if (str == NULL)
		return (str);
	while (str[l] != '\0')
		l++;
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
/**
 * *new_dog - function that creates a new dog.
 *
 * Description: function that creates a new dog.
 *
 * @name: pointer
 * @age: float
 * @owner: pointer
 *
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (!nd)
		return (NULL);
	nd->name = _strdup(name);
	if (!nd->name)
	{
		free(nd);
		return (NULL);
	}
	nd->owner = _strdup(owner);
	if (!nd->owner)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	nd->age = age;
	return (nd);
}
