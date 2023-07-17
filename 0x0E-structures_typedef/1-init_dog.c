#include "dog.h"

/**
 * init_dog - init a variable of type struct dog
 * @d: variable of type strct dog
 * @name: dog info
 * @age: dog info
 * @owner: dog info
 */
void inti_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
