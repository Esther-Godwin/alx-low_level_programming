#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct for dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
