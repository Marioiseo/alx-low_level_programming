#include "lists.h"

/**
 * print_list - my first linked list to be done
 * @h: pointer to the head i guess
 * Return: i really dont know
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nill)");
		h = h->next;
		i++;
	}
	return (i);
}
