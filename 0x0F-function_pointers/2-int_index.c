#include "function_pointers.h"
/**
 * int_index - more to do more to point
 * @array: the array
 * @size: size of array
 * @cmp: comparing function
 * Return: return int if there any or -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		while (i < size)
		{
		if (cmp(array[i]))
				return (i);
		i++;
		}
	}
	return (-1);
}
