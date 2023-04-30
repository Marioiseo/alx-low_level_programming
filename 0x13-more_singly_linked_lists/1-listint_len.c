#include "lists.h"
/**
 * listint_len - the length of the list
 * @h: the list
 * Return: the len i guess
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
	h = h->next;
	i++;
	}
	return (i);
}
