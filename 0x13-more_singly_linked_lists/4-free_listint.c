#include "lists.h"
/**
 * free_listint - lets free it
 * @head: the list
 * Return: VOIDYY
 */
void free_listint(listint_t *head)
{
	listint_t *nextnode, *node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		nextnode = node->next;
		free(node->n);
		free(node);
		node = nextnode;
	}
}
