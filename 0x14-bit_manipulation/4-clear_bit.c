#include "main.h"
/**
 * clear_bit - set a specific bit from a byte
 * @n: the num
 * @index: the index
 * Return: 1 nor 0;
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (*n && index < 64)
	{
	*n &= ~(1 << index);
	return (1);
	}
	else
		return (-1);
}
