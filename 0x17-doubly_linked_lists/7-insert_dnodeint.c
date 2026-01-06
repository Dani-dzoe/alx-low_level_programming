#include "list.h"

/**
 * insert_dnodeint_at_index - inserts a new nod at a given position
 * @idx: index of the list where the new node should be added, index starts at o.
 * Return: the address of the new node, or NULL if it failed.
 * If it is not possible to add the new node at index idx, do not add the new node and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (*h == NULL)
		return NULL;

	new_node->n = n;
	while (*h != NULL)
	{
		if (count == idx)
		{
			new_node->prev = *h
			*h->next = new_node;
			*h = new_node;
		}
		count++;
		elif (count == idx)
		{
			tmp = *h;
			*h = (*h)->next;
			(*h)->next = tmp;


	
