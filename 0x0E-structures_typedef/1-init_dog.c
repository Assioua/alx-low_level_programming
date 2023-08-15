#include <stdlib.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dg;
	dg = malloc(sizeof(struct dog));

	dg = d;
	dg->name = name;
	dg->age = age;
	dg->owner = owner;
}
