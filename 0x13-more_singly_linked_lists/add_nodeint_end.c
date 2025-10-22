#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint *new, *last;

	new = malloc(sizeof(listint));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new-next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while(last->next =! NULL)
			last = last->next;
		last = new;
	}
	return (new);
}
