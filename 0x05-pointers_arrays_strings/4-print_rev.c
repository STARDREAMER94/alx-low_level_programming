#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: inputted pointer value
 * Return: value of type integer
 */

void print_rev(char *s)
{
	int i, d, count = 0;


	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (d = count; d >= 0; d--)
	{
		_putchar(s[d]);
	}
	_putchar('\n');

}
