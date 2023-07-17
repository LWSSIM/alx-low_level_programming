#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog of type dog_t
 * @name:-
 * @age:-
 * @owner:-
 * Return: dog_t with inputs
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_len, owner_len, i;

	d = malloc(sizeof(dog_t));
	if (d == 0)
		return (0);

	for(name_len = 0; name[name_len]; name_len++)
		;
	d->name = malloc((name_len + 1) * sizeof(char)); /*handle name*/
	if (!d->name)
	{
		free(d);
		return (0);
	}
	for (i = 0; i < name_len; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	for (owner_len = 0; owner[owner_len]; owner_len++)
		;
	d->owner = malloc((owner_len + 1) * sizeof(char));/*handle owner*/
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (0);
	}
	for (i = 0; i < owner_len; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';

	d->age = age; /*handle age*/

	return (d);
}
