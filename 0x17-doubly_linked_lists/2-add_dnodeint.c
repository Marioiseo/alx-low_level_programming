#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curren =  malloc(sizeof(struct dlistint_s));

	curren->n = n;
	curren->next = *head;
	*head = curren;
	return (*head);
}
