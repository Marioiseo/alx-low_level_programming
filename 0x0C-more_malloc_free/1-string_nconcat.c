#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - lets see how far can malloc go
 * @s1: first string
 * @s2: second one
 * @n: num of chars to cpy from s2
 * Return: pointer to s1 followed by s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt; 
	unsigned int i, j;

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
	pt = malloc(strlen(s1) + n + 1);

	if (pt == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		pt[i] = s1[i];
	}
	for (j = 0 ; j < n; i++, j++)
	{
		if (s2[j] != '\0')
		pt[i] = s2[j];
	}
	pt[i] = '\0';
	return (pt);
	free(pt);
}
