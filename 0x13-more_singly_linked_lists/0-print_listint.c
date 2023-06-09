#include "lists.h"

/**
 * print_listint -  printing an int list
 * @h: its just a linked list
 * Return: the size of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
