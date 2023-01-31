#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of
 * a listint_t list
 * @head: a pointer to the address of the head of the listint_t list
 * @n: the integer for the new node to contain
 * Return: NULL of the address of the new element
 */
listint_int *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		retutn (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
