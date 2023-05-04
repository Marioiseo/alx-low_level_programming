#include "main.h"
unsigned int power(int a, int b);
/**
 * binary_to_unit - lets seek a peaceful project
 * @b: the binary num
 * Return: unsigned int from binary
 */
unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int sum = 0;

		for (i = 0; i < 8; i++)
		{
		if (b[i])
			sum+= power(2 , i);
		}
	return (sum);
}
/**
 * power - my recursive func to get power
 * @a: the num
 * @b: the power of num
 * Return : the sum of it
 */
unsigned int power(int a, int b)
{
	unsigned int sum = 0;
	if (b == 1)
		return (1);
	else
	sum += a * power(a , b - 1);
	return (sum);
}	
