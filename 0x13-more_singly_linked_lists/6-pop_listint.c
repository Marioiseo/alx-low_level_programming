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

	replace = *head;
	if (!head || !replace)
		return (0);

	i = replace->n;
	*head = replace->next;
	free(replace);
	return (i);
}
