/**
 * init_dog - initialize dog struct
 *@name: dog's name
 *@d: struct for dog
 *@age: dog's age
 *@owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
