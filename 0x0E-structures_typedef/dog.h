#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - this is a sructure called dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: A simple dog structure containing its name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
