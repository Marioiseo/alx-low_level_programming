#include "lists.h"

/**
 * print_list - my first linked list to be done
 * @h: pointer to the head i guess
 * Return: i really dont know
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)");
		return (1);
		}
		printf("[%d]%s",h->len, h->str);
		i = h->len;
		h = h->next;
	}
	return (i);
}
