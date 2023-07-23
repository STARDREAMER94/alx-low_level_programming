#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause normal process
 *       termination with a status value of 98
 * @b: inputtted integer variable
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
