#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked listint_t list
 * @h: pointer to struct node
 * Return: size_t (unsigned int)
 */

size_t listint_len(const listint_t *h)
{
	size_t k;

	k = 0;
	while (h != NULL)
	{
		k++;
		h = h->next;
	}

	return (k);
}

