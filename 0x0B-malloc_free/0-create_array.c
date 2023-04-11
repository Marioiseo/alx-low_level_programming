#include <stdlib.h>
#include "main.h"
/**
 * create_array - creating array in heap with malloc
 * @size: size of it
 * @c: the string i'll declare
 * Return: string nor null
 */
char *create_array(unsigned int size, char c)
{
	char *pt;
	
	unsigned int i;

	(void)c;
	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
	char *pt = (char *) malloc(size);
		for (i = 0; i < size; i++)
		pt[i] = c;

	return (pt);
	free(pt);
	}
}
