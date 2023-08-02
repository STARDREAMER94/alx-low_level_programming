#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: pointer to struct node
 * Return: size_t (unsigned int)
 */

size_t print_listint(const listint_t *h)
{
	size_t k;

	k = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		k++;
		h = h->next;
	}

	return (k);
}

