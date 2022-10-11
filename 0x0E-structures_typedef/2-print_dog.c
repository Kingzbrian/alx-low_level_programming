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
		printf("Name: %s\n", d->name ? d->name : "(nil)\n");
		printf("Age: %f\n", d->age ? d->age : "(nil)\n");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)\n");
	}
}
