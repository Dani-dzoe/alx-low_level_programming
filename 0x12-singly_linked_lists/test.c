#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	char *str;
	int age;
	int len;
	struct node *next;
} node;

int main()
{
	node *head;

	head = malloc(sizeof(node));
	head->next = NULL;
	head->age = age;
	head->str = str;
	head->len = len;

	node *temp = malloc(sizeof(node));

	temp->next = head->next;
	temp = head;

	return (0);
}
