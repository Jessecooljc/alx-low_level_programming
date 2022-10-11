#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
