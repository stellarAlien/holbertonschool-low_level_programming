#include "dog.h"
/**
 * new_dog - fills struct of new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: info of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *nw;

nw = (dog_t *)malloc(sizeof(dog_t));
if (name == NULL || owner == NULL)
{
	printf("insert valid info");
	return (NULL);
}
nw->name = name;
nw->age = age;
nw->owner = owner;
return (nw);
}
