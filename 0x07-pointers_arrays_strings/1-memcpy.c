#include "main.h"
/**
 * _memcpy - implementation of func memcpy
 * @dest: destination of copy
 * @src: source of it
 * @n: num of bytes to copy
 * Return: Pointer of chars or we can call it string ^^
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
