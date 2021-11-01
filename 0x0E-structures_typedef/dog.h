#ifndef DOG_H
#define DOG_H
#include<stddef>
#include<stdlib.h>
/**
 *struct dog - data of dogs
 *@name: name of dog
 *@age: age dog
 *@owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
