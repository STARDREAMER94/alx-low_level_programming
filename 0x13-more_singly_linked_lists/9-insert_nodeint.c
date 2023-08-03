#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *addnew;
	listint_t *holdhead = *head;

	addnew = malloc(sizeof(listint_t));
	if (addnew == NULL || head == NULL)
		return (NULL);

	addnew->n = n;
	addnew->next = NULL;

	if (idx == 0)
	{
		addnew->next = *head;
		*head = addnew;
		return (addnew);
	}

	for (k = 0; holdhead && k < idx; k++)
	{
		if (k == idx - 1)
		{
			addnew->next = holdhead->next;
			holdhead->next = addnew;
			return (addnew);
		}
		else
			holdhead = holdhead->next;
	}
	return (NULL);
}
