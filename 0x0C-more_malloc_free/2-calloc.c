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
	int *pt;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	pt = malloc((int)nmemb * (int) size);

	if (pt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		pt[i] = 0;
	pt[i] = '\0';
	return (pt);
}
