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
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	pt = malloc(strlen(s1) + n + 1);

	if (pt == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		pt[i] = s1[i];
	}
	for (j = 0 ; j < n; j++)
	{
		pt[i] = s2[j];
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
