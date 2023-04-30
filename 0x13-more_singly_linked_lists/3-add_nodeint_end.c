#include "lists.h"
/**
 * add_nodeint_end - att node at the end
 * @head: the head
 * @n: the new tail
 * Return: the new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newtail, *trace;

	newtail = malloc(sizeof(listint_t));
	trace = *head;
	if (!head || !newtail)
		return (NULL);
	if (n)
		newtail->n = n;
	if (!newtail->n)
	{
		free(newtail);
		return (NULL);
	}
	if (trace)
	{
		while (trace->next)
			trace = trace->next;
	trace->next = newtail;
	}
	else
		*head = newtail;
	return (newtail);
}
