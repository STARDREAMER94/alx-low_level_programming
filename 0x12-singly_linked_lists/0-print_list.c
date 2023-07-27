#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: node structure declaration
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

}
