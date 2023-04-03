#include "main.h"
/**
 * _memset - implmentation of memset func
 * @s: the string full of constant
 * @b: the constant
 * @n: num of constant among the string
 * Return: the string after memset
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
