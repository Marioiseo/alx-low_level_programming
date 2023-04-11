#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copying with malloc
 * @str: the string to copy
 * Return: the copied string
 */
char *_strdup(char *str)
{
	int i, b = 0;

	int j = 0;

	char *pt;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		b++;
	pt = (char *) malloc(b + 1);
		if (pt == NULL)
		{
			return (NULL);
		}
		else
		{
		for (i = 0; i < b; i++);
	{
		pt[i] = str[i];
	}
	return (pt);
		}
	free(pt);
}
