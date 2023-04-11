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
	char *pt = (char*) malloc(size);

	int i;

	if (size = 0)
		return (NULL);
	for (i = 0; i < size; i++);
	{
	pt[i] = c;
	}
	return (pt);
	free (pt);
}
