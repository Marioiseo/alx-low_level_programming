#include "main.h"
/**
 * _strncat - n is the problem n is the way
 * @dest: full string
 * @src: copied one
 * @n: nums of chars allowed from src
 * Return: string char*
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
