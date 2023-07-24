#include <stdio.h>

/**
 * main - entry point
 * prints file name
 * Write a program that prints the name of the file it was compiled from,
 * followed by a new line
 * You are allowed to use the standard library
 * Return: Always 0
 */

int main (void)
{
	printf("%s\n", __FILE__);
	return (0);
}
