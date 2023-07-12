#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * FYI: The standard library provides a similar function: strlen
 * @s: inputted pointer char string variable
 * Return: integer counter string length
 */

int _strlen_recursion(char *s)
{
	int i;

	if ((*s == '\0'))
	{
		return (0);
	}

	s++;
	i = 1 + _strlen_recursion(s);

	return (i);
}
