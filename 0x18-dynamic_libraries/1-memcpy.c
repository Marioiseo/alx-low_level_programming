#include "main.h"
/**
 * _memcpy - implmentation of memset func
 * @s: the string full of constant
 * @b: the constant
 * @n: num of constant among the string
 * Return: the string after memset
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for(i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
