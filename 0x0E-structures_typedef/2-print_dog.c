#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 *
 * Description: function that prints a struct dog
 *
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("%s\n", "(nil)");
		printf("Name: %s\n", d->name);
		if (!d->age)
			printf("%s\n", "(nil)");
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("%s\n", "(nil)");
		printf("Owner: %s\n", d->owner);
	}
}
