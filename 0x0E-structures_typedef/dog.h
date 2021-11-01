#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure dog
 *
 * Description: structure dog
 *
 * @name: pointer - nombre del perro
 * @age: float - edad del perro
 * @owner: char - dueño del perro
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_H*/
