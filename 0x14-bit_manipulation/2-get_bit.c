#include "main.h"
/**
 * get_bit - get a specific bit from a byte
 * @n: the num
 * @index: the index
 * Return: 1 nor 0;
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	char arr[32];

	do
	{
		if (n % 2 == 0)
			arr[i] = '0';
		else
			arr[i] = '1';
		n /= 2;
		i++;
	}while (n != 0);
	
	for (i = 0; i < strlen(arr); i++)
	{
		if (i == index)
		{
			if (arr[i] == '0')
		       return (0);
			if (arr[i] == '1')
			return (1);
		}
	}
	return (-1);
}
