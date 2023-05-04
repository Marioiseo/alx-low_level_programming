#include "main.h"
/**
 * set_bit - set a specific bit from a byte
 * @n: the num
 * @index: the index
 * Return: 1 nor 0;
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0, j;
	char arr[256];

	do {
		if (*n % 2 == 0)
			arr[i] = '0';
		else
			arr[i] = '1';
		*n /= 2;
		i++;
	} while (*n != 0);
	for (j = 0; j < i; j++)
	{
	if (j == index)
			{
		arr[j] = '1';
			return (1);
			}
	return (-1);
}
