#include "lists.h"
/**
 * free_list - free your list now
 * @head: the first of the list
 * Return: voidy
 */
void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		next_node = node->next;
		if (node->str)
		free(node->str);
		free(node);
		node = next_node;
	}
}
