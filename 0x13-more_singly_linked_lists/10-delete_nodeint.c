#include "lists.h"
/**
 * delete_nodeint_at_index - delete specific node
 * @head: the entire list
 * @index: the specific index
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node, *deleted;

	node = *head;
	if (!head || !*head)
		return (-1);
	if (!index)
	{
	*head = (*head)->next;
	free(node);
	return (1);
	}
	while (node)
	{
		if (i == index - 1)
		{
			deleted = node->next;
			node->next = deleted->next;
			free(deleted);
			return (1);
		}
		node = node->next;
		i++;
	}
	return (-1);
}
