#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * You are allowed to use the standard library
 * If an element of d is NULL, print (nil)
 * If d is NULL print nothing
 * @d: pointer to structure
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->age == 0)
		printf("Age: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");

	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
