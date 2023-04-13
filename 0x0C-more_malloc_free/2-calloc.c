#include <stdlib.h>
#include "main.h"
/**
 * _calloc - making calloc with malloc lol
 * @nmemb: how many elements
 * @size: how many bites
 * Return: VOID VOID VOID
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;

	if (size == 0 || nmemb == 0)
		return (NULL);
	pt = malloc(nmemb * size);

	if (pt == NULL)
	{
		return (NULL);
	}
	return (pt);
}
