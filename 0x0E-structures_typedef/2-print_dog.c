#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a [struct dog] type
 * @d: variable name of type [struct dog]
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			d->name = "(nil)";
		if (!d->age)
			d->age = 0;
		if (!d->owner)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
