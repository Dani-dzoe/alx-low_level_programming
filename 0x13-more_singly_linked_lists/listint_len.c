#include "lists.H"

size_t listint_len(const listint *h)
{
	size_t len;

	while(h)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
