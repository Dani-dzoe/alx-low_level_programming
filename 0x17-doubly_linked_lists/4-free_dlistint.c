#include "lists.h"

/**
 * free_dlistint_t - frees a dlistint_t list
 * @head: pointer
 * Return: Always 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while(head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
