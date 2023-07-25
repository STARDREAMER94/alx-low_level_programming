#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - a function that creates a new dog separate from the struct i think
 * @name: char
 * @age: flaot
 * @owner: char
 * Return: new struct from dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int namelength = 0, ownlength = 0;

	if (name != NULL && owner != NULL)
	{
		namelength = _strlen(name) + 1;
		ownlength = _strlen(owner) + 1;
		n_dog = malloc(sizeof(dog_t));

		if (n_dog == NULL)
			return (NULL);

		n_dog->name = malloc(sizeof(char) * namelength);
		if (n_dog->name == NULL)
		{
			free(n_dog);
			return (NULL);
		}

		n_dog->owner = malloc(sizeof(char) * ownlength);

		if (n_dog->owner == NULL)
		{
			free(n_dog);
			free(n_dog->name);
			return (NULL);
		}

		n_dog->name = _strcpy(n_dog->name, name);
		n_dog->owner = _strcpy(n_dog->owner, owner);
		n_dog->age = age;
	}
	return (n_dog);
}


/**
 * _strlen - a function that returns the length of a string
 * @s: inputted pointer value
 * Return: value of type integer
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}

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
