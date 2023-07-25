#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: inputted array of integers
 * @size: size of array
 * @action: pointer to function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (k = 0; k < size; k++)
		{
			action(array[k]);
		}
	}
}
