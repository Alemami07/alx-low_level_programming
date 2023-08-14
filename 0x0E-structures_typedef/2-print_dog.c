#include <stdio.h>
#include "dog.h"
/**
 *print_dog - prints details of a dog
 *@d: points to details of dog
 *Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
