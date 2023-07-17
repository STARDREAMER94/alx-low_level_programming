#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * Return: return to char pointer 'dest'
 * FYI: The standard library provides a similar function: strcpy
 * @dest: return value, we code so that 'src' copies to 'dest'
 * @src: we are copying from this value to 'dest
 */

char *_strcpy(char *dest, char *src)
{
	int a, i, count = 0;
	char d;

	for (i = 0; src[i] != '\0'; i++)
	{
		count++;
	}

	for (a = 0; a <= count; a++)
	{
		d = src[a];
		dest[a] = d;
	}

	return (dest);
}
