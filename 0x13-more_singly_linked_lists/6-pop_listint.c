#include "lists.h"
/**
 * pop_listint - pop the intire list
 * @head: the head of the list
 * Return: the n inside the head
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *replace;

	if (!head)
		return (0);
	replace = *head;
	i = replace->n;
	return (i);
}
