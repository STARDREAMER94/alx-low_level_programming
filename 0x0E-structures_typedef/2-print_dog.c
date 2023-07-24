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

	if (d != NULL)
	{
		printf("Name: %s\n", ((d->name) ? d->name : "(nil)"));
		printf("Age: %f\n", ((d->age) ? d->age : 0));
		printf("Owner: %s\n", ((d->owner) ? d->owner : "(nil)"));
	}
}
