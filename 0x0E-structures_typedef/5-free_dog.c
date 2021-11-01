#include "dog.h"
/**
 * free_dog
 * @d: pointer to dog's info
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{	
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
	}
}
	       
