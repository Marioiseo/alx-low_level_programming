#include "lists.h"
/**
 * dlistint_len - my own function to calc the len
 * @h: the list to check
 * Return: the length
 */

size_t dlistint_len(const dlistint_t *h)
{
	int a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
