#include "dog.h"
#include <string.h>
#include <stdlib.h>
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
	nd->name = strdup(name);
	if (!nd->name)
	{
		free(nd);
		return (NULL);
	}
	nd->owner = strdup(owner);
	if (!nd->owner)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	nd->age = age;
	return (nd);
}
