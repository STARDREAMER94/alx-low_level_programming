#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: head of singly link
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *templink;

	while (head)
	{
		templink = head->next;
		free(head->str);
		free(head);
		head = templink;
	}
}

