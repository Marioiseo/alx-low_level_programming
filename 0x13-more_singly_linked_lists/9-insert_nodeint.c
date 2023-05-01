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
	if (!newnode || !head)
		return (NULL);
	newnode->n = n;
	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	node = *head;
	while (node)
	{
		if (i == idx)
		{
			newnode->next = node->next;
			node->next = newnode;
			return (newnode);
		}
		i++;
		node = node->next;
	}
	free(newnode);
	return (NULL);
}

