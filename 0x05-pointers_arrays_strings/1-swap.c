#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: 1st input pointer variable
 * @b: 2nd input pointer variable
 * Return: void, no return
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
