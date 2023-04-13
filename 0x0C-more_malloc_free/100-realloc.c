#include "main.h"
#include <stdlib.h>
/**
 * _realloc - realloc with malloc
 * @ptr: old pointer
 * @old_size: the old size of it
 * @new_size: the new size of it
 * Return: VOID
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pt;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		pt = malloc(new_size);
	if (pt == NULL)
	return (NULL);
		return (pt);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
	pt = malloc(new_size);
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
	{
		((char *)pt)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	}
	return (pt);
}
