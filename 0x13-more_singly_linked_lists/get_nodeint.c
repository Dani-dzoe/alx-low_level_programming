#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;

	tmp = head;
	while(tmp != NULL)
	{
		tmp = head->next;
	}


