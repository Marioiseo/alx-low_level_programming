#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curren =  malloc(sizeof(struct dlistint_s));

	if (!head)
		return (NULL);
	curren->n = n;
	curren->next = *head;
	if (!curren)
		return (NULL);
	*head = curren;
	return (*head);
}
