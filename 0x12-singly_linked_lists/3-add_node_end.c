#include "lists.h"
/**
 * add_node_end - adding it to the end of the list
 * @head: the head of the list
 * @str: the string to copy
 * Return: the new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newtail;
	list_t *node = *head;

	newtail = malloc(sizeof(list_t));
		if (!head || !newtail)
		return (NULL);
	if (str)
	{
	newtail->str = strdup(str);
	if (!newtail->str)
	{
	free (newtail);
		return (NULL);
	}
	newtail->len = strlen(str);
	}
	while (node->next)
	node = node->next;
	node->next = newtail;
	return (newtail);
}
