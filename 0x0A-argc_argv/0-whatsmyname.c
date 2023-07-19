#include "main.h"
#include <stdio.h>

/**
 * main - entry point _ function to give argv[0]
 * @argv: array of agruments vector
 * @argc: counter of arguments
 * Return: always 0
 * Write a program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name,
 * without having to compile it again
 * You should not remove the path before the name of the program
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}

