#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -function as param
 * @array: the func
 * @size: the size of it
 * @action: the pointer to func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *tsize = array + size;

	while (array < tsize)
		action(*array++);
}
