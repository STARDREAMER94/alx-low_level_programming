#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - fuction cotaining struct
 * @d: structure
 * @name: char
 * @owner: char
 * @age: float
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
