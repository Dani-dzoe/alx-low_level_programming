#include "list.h"

/**
 * insert_dnodeint_at_index - inserts a new nod at a given position
 * @idx: index of the list where the new node should be added, index starts at o.
 * Return: the address of the new node, or NULL if it failed.
 * If it is not possible to add the new node at index idx, do not add the new node and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
