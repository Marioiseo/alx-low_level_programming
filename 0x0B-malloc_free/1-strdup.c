#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copying with malloc
 * @str: the string to copy
 * Return: the copied string
 */
char *_strdup(char *str)
{
	int i, j = 0;

	while (str[j] != '\0')
		j++;

	char *pt = (char *) malloc(j)
		if (pt == NULL)
		{
			return (NULL);
		}
		else
		{
		for (i = 0; i < j; i++);
	{
		pt[i] = str[i];
	}
	return (pt);
		}
	free(pt);
}
