#include "lists.h"
/**
 * print_dlistint - printing all values
 * @h: the list to check
 * Return: the num of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int a = 0;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	a++;
	}
	return (a);
}
