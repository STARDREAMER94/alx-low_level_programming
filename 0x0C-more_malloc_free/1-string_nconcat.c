#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * The returned pointer shall point to a newly allocated space in memory,
 *   containing s1, followed by the first n bytes of s2, and null terminated
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * @s1: string 1
 * @s2: string 2
 * @n: integer variable
 * Return: char pointer. If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k = 0, j, l, i = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	str = malloc((sizeof(char) * (i + n)) + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		str[j] = s1[j];
	}
	for (l = j; l <= (j + n); l++)
	{
		str[l] = s2[k];
		k++;
	}
	str[l] = '\0';
	return (str);
}
