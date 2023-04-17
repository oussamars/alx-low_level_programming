#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure that holds dog info
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner's name
 *
 * Description: a structure that holds basic info about a dog
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
#endif
