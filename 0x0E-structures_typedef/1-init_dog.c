#include "main.h"
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer
 * @name: pointer
 * @age: float
 * @owner: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog dog;

	dog.name = name;
	dog.age = age;
	dog.owner = owner;
}
