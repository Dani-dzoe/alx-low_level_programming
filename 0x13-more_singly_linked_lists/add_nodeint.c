#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_int_t *new;

	new = malloc(sizeof(list_int_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new-next = *head;
	*head = new;

	return (new);
}

	
