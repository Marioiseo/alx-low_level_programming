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

	if (ptr == NULL)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
		return (NULL);
	pt = malloc(new_size * sizeof(int));
	if (pt == NULL)
		return (NULL);
	for (i = 0; i <= old_size; i++)
	{
		((int *)pt)[i] = ((int *)ptr)[i];
	}
	free(ptr);
	return (pt);
}
