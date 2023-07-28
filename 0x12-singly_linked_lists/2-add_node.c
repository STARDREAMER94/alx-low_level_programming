#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * Return: the address of the new element, or NULL if it failed
 * @str: needs to be duplicated
 * You are allowed to use strdup
 * @head: pointer of pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addnew;
	unsigned int length = 0;

	while (str[length])
	{
		length++;
	}

	addnew = malloc(sizeof(list_t *));

	if (addnew == NULL)
		return (NULL);

	addnew->str = strdup(str);
	addnew->len = length;
	addnew->next = (*head);
	(*head) = addnew;

	return (*head);
}



