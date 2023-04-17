#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: string for dog's name
 * @age: float for dog's age
 * @owner: string for dog's owner's name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
