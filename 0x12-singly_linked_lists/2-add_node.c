#include "lists.h"
/**
 * add_node - add a new node at the begining
 * @head: the head of the linking list
 * @str: the new string
 * Return: the new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead;

	newhead = malloc(sizeof(list_t));
	if (!head || !newhead)
	return (NULL);
	if (str)
	{
		newhead = strdup(str);
			if (!newhead->str)
			{
				free(newhead);
				return (NULL);
			}
		newhead->len = strlen(newhead->str);
	}
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
