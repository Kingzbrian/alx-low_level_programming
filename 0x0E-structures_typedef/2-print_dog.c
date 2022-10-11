#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function to print struct dog
 * struct dog - structure named dog
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		if (!(d->owner))
			printf("Owner:(nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
