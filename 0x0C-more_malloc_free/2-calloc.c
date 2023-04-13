#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - making calloc with malloc lol
 * @nmemb: how many elements
 * @size: how many bites
 * Return: VOID VOID VOID
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;
	unsigned int i = nmemb * size;

	if (size == 0 || nmemb == 0)
		return (NULL);
	pt = malloc(i);

	if (pt == NULL)
	{
		return (NULL);
	}
	memset(pt, 0, i);
	return (pt);
}
