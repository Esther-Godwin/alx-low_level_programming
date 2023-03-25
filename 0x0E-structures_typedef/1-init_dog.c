#include "dog.h"

/**
* init_dog - Initialize a variable of type struct dog
* @d: Pointer to struct dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: The dog owner
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
