#include "main.h"
/**
 * flip_bits - flipping and flipping
 * @n: the first num
 * @m: the second
 * Return: the count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		if (xor & 1UL)
			count++;
		xor >>= 1;
	}
	return (count);
}
