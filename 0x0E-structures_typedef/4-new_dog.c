#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	
	if (dog)
	{
		return (dog);	
	}
	else
	{
		return (NULL);
	}
}
