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

	char *pt;

	while (str[j])
		j++;

	pt = (char *) malloc(j);
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
