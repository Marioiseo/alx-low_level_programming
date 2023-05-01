#include "lists.h"
/**
 * sum_listint - sum them all
 * @head: the linked list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *node = head;

	if (!node || !head)
		return (0);
	while (node)
	{
		i += node->n;
		node = node->next;
	}
	return (i);
}
