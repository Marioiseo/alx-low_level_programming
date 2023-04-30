#include "lists.h"
/**
 * free_listint2 - make a null header
 * @head: the head of the list
 * VOIDIYY
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *current, *newhead;

	if (!head)
		return;
	newhead = *head;
	current = newhead->next;
	free(newhead);
	*head = NULL;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
