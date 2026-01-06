#include "lists.h"

/**
 * dlistint_len - functions that returns the length of a dlistint list.
 * @h: head node
 * Return: length of dlistint list
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + dlistint_len(h->next));
}
