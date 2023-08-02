#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;
	listint_t *holdhead = head;

	if (holdhead == NULL)
		return (NULL);

		k = 0;
		while (holdhead && k < index)
		{
			holdhead = holdhead->next;
			k++;
		}

	/* return (temp ? temp : NULL); */
	return (holdheead);
}
