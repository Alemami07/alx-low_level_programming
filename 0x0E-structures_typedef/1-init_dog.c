#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - struct for dog
 *@d: emebedded structure
 *@name: fist member
 *@owner: second member
 *@age: third
 *Return: pointer to struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;

}
