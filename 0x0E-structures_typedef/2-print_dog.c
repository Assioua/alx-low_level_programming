#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
        if (d == NULL)
        {
                exit(0);
        }
        if ( d->name != NULL)
        {
                printf("name : %s\n", d->name);
        }
        else
        {
                printf("name : nil\n");
        }
        if (d->age != 0)
        {
                printf("age : %f\n", d->age);
        }
        else
        {
                printf("age : nil\n");
        }
        if (d->owner != NULL)
        {
                printf("owner : %s\n", d->owner);
	}
	else
	{
		printf("owner : nil\n");
	}
}
