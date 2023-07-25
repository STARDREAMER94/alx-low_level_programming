#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: char pointer
 * f: pointer to function that takes char pointer input
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

