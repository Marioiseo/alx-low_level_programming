#include "main.h"
/**
 * _strcat - the libraries help alot
 * @dest: the copy
 * @src: the copy2
 * Return: dest as a string
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
	*dest += src[j];
	}
	return (dest);
}
