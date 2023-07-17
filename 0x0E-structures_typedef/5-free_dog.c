#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - let's the dogs out woof :3
 * @d: pointer to type dog_t[struct dog]
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
