#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: 1st inputted variable
 * @s2: 2nd inputted variable
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int n = 0, i = 0, p = 0, r = 0;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	while (s1[n])
		n++;
	while (s2[i])
		i++;
	str = malloc((sizeof(char) * (n + i)) + 2);
	if (str == NULL)
		return (NULL);
	while (r < n)
	{
		str[r] = s1[r];
		r++;
	}
	str[r] = ' ';
	for (p = 0; ((r + 1) <= (n + i)); p++)
	{
		str[r] = s2[p];
		r++;
	}
	str[r] = '\0';
	return (str);
}
