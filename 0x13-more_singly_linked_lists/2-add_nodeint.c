#include "lists.h"
/**
 * add_nodeint - add a new head
 * @head: the old head
 * @n: the new head
 * Return: a new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead = malloc(sizeof(listint_t));

	if (!head || !newhead)
		return (NULL);
	if (n)
		newhead->n = n;
	if (!newhead->n)
	{
		free(newhead);
		return (NULL);
	}
	newhead->next = *head;
	head = head->next;
	return (newhead);
}
