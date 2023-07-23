#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer variable
 * Return: char pointer. If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k = 0, j = 0, l = 0, i = 0, b = 0, m = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[m])
		m++;
	if (n >= m)
		b = i + k;
	else
		b = i + n;

	str = malloc((sizeof(char) * (i + n)) + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		str[j] = s1[j];
	}
	for (l = j; l <= b; l++)
	{
		str[l] = s2[k];
		k++;
	}
	str[(l + 1)] = '\0';
	return (str);
}
