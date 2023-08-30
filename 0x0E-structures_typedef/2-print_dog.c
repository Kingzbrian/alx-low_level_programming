#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 */
void print_dog(struct dog *d)
{
        if(d){
                char *name = d->name;
                float age = d->age;
                char *owner = d->owner;

                if(d == NULL){}

                if(name == NULL || age <= 0 || owner == NULL)
                        printf("nil\n");
                else
                {
                        printf("Name: %s\n", name);
                        printf("Age: %.1f\n", age);
                        printf("Owner: %s\n", owner);
                }

        }

}
