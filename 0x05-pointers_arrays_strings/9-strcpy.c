#include "main.h"
/**
 * _strcpy - thats insane
 * @dest: please enter your lovely string
 * @src: the copied one or vesce vesca
 * Return: CHAR
*/
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
	dest[b] = src[b];
	}
	return (dest);
}
