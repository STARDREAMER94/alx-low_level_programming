#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - a function that creates an array of chars,
 *        and initializes it with a specific char.
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 * @size: size of array
 * @c: intilizes array
 * Return: specified above. A char vairable
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int k;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < size; k++)
	{
		s[k] = c;
	}

	return (s);
}



