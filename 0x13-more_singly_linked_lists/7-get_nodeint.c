#include "lists.h"
/**
 * get_nodeint_at_index - search for specific node
 * @head: the whole list
 * @index: the specific node
 * Return: the specific node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	node = head;
	if (!node || !head)
		return (NULL);
	while (node)
	{
		i++;
		node = node->next;
		if (i == index)
			return (node);
	}
	if (i < index)
		return (NULL);
}
