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
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);
	pt = malloc(nmemb * sizeof(int));

	if (pt == NULL)
	{
		return (NULL);
	}
	while (((int*)pt)[i])
		((int*)pt)[i] = 0;
	return (pt);
}
