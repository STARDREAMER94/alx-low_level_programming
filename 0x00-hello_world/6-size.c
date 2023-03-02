#include <stdio.h>
/**
 * main - Entry point
 * prints the size of various types on the computer
 * it is compiled and run on
 * install the package libc6-dev-i386
 * on your Linux to test the -m32 gcc option
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)", sizeof(char));
	printf("Size of an int: %ld byte(s)", sizeof(int));
	printf("Size of a long int: %ld byte(s)", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)", sizeof(long long int));
	printf("Size of a float: %ld byte(s)", sizeof(float));


	return (0);
}
