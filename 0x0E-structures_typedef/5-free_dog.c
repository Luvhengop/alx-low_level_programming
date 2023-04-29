#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the allocated memory of the dog
 * @d: pointer to the dog to free
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)

{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
