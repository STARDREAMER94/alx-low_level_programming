#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space:
 *     in memory, which contains a copy of the string given as a parameter.
 * The _strdup() function returns a pointer to a new string which is:
 *     a duplicate of the string str.
 * Memory for the new string is obtained with malloc, & can be freed with free
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 * FYI: The standard library provides a similar function: strdup.
 * @str: inputted variable
 */

char *_strdup(char *str)
{
	int i = 0, n, m;
	char *s;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	for (m = 0; m < i; m++)
	{
		s[m] = str[m];
	}

	s[m] = '\0';

	return (s);
}


