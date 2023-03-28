#include "main.h"
/**
 * _strcpy - thats insane
 * @dest: please enter your lovely string
 * @src: the copied one or vesce vesca
 * Return: CHAR
*/
char *_strcpy(char *dest, char *src)
{
	char i, l;

	int a = 0;

	int b;

	while (src[a] <= '\0')
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
	i = src[b];
	l += i;
	}
	*dest = l;
	return (dest);
}
