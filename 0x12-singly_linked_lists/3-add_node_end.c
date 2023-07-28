#include "lists.h"

/**
 * add_node_end -  function that adds a new node at the end of a list_t list
 * Return: the address of the new element, or NULL if it failed
 * @str: str needs to be duplicated
 * @head: pointed pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *addnew;
	list_t *templink;
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
	addnew->next = NULL;
	templink = head;

	 if (*head == NULL)
	 {
		 *head = addnew;
		 return(addnew);
	 }
	while (templink->next != NULL)
		templink = templink->next;

	templink->next = addnew;
	return (addnew);
}
