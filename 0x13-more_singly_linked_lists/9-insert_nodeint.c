#include "lists.h"
/**
 * insert_nodeint_at_index - lets do some hardwork
 * @head: the linked list
 * @idx: the index to put the new node
 * @n: the value of n in the new node
 * Return: the pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newnode, *node;

	newnode = malloc(sizeof(listint_t));
	node = *head;
	(void)n;
	if (!newnode || !head || !node)
		return (NULL);
	while (node)
	{
		i++;
		if (i == idx)
		{
			newnode->n = node->n;
			newnode->next = node->next;
			free(node);
			break;
		}
		node = node->next;
	}
	if (idx > i)
		return (NULL);
	else
		return (newnode);
}

