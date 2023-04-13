#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - being expert with mallocs
 * @b: the size of memory to be allocated
 * Return:VOID
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
	{
		exit (98);
	}

	return (pt);
}
