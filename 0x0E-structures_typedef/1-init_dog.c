#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to init struct dog variable
 * @d: dog param
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dg;

	dg = malloc(sizeof(struct dog));
	dg = d;
	dg->name = name;
	dg->age = age;
	dg->owner = owner;
}
