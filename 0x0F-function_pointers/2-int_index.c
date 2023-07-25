#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: inputted array
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * int_index returns the index of the first element for which the cmp function
 * does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 * Return: integer variable
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (k = 0; k < size; k++)
		{
			cmp(array[k]);
			return (k);
		}
	}

	return (-1);
}
