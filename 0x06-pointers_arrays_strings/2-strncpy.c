#include "main.h"
/**
 * _strncpy - copying with specific num count
 * @dest: the copied one
 * @src: the original one
 * @n: nums of chars to copy
 * Return: string char*
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] <= src[n])
	{
	dest[i] = src[i];
		i++;
	}
	return (dest);
}
