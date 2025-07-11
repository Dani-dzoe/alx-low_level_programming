#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_t - singly linked lists
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked lists node structure for projects
 */
typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
