#include "main.h"
/**
 * set_bit - just so worried
 * @n: the num
 * @index: the index
 * Return: 1 or-1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n && index < 64)
	{
		*n |= 1UL << index;
		return (1);
	}
	else
		return (-1);
}
