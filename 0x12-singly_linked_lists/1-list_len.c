#include "lists.h"
/**
 * list_len - returning num of linked
 * list_len - moree descrptiong for linked
 * @h: the linked list
 * Return: the size
*/
size_t list_len(const list_t *h)
{
	size_t i;

	while (h)
	{
		h = h->next;
			i++;
	}
	return (i);
}
