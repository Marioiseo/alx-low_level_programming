#include "main.h"
unsigned int power(int a, int b);
/**
 * binary_to_uint - lets seek a peaceful project
 * @b: the binary num
 * Return: unsigned int from binary
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j = 1;
	unsigned int sum = 0;
	int a = 0;

	if (!b)
		return (0);
	a = strlen(b);
		for (i = a - 1; i >= 0 ; j++, i--)
		{
		if (b[i] == '1')
		{
			sum += power(2, j);
		}
		else if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		else
			continue;
		}
	return (sum);
}
/**
 * power - my recursive func to get power
 * @a: the num
 * @b: the power of num
 * Return: the sum of it
 */
unsigned int power(int a, int b)
{
	if (b == 1)
	{
		return (1);
	}
	else
	return (a * power(a, b - 1));
}
