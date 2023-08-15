#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
        if (d != NULL)
        {
        if ( d->name != NULL)
        {
                printf("name : %s\n", d->name);
        }
        else
        {
                printf("name : nil\n");
        }
	printf("age : %f\n", d->age);
        if (d->owner != NULL)
        {
                printf("owner : %s\n", d->owner);
	}
	else
	{
		printf("owner : nil\n");
	}
	}
}
