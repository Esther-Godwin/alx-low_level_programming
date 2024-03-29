#include "dog.h"
#include <stdio.h>

/**
* print_dog - Prints a struct dog
* @d: Pointer to struct dog
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
