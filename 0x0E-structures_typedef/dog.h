#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog define struct
 * @name: first param
 * @age: second param
 * @owner: third param
 *
 * Description: struct of a dog
*/

struct dog
{
	char *name;
	double age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
