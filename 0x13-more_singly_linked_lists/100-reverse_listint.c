#include "lists.h"
/**
 * reverse_listint - reverse the entire list
 * @head: the head of the old one
 * Return: the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *prev;

	if (!head || !*head)
	return (NULL);
	prev = *head;
	*head = NULL;
	while (prev)
	{
		curr = prev->next;
		prev->next = *head;
		*head = prev;
		prev = curr;
	}
	return (*head);
}
