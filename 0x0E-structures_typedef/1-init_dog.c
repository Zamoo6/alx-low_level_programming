#include<stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to init
 * @name: name to init
 * @owner: owner to init
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == NULL)
		d = malloc(sizeof(strcut dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
