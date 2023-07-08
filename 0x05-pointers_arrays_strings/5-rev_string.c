#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: inputted pointer value
 * Return: value of type integer
 */

void rev_string(char *s)
{
	int i, e, count = 0;
	char rev = s[0];

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (e = 0; e <= (count - 1); e++)
	{
		count = count - 1;
		rev = s[count];
		s[count] = s[e];
		s[e] = rev;
	}


}
