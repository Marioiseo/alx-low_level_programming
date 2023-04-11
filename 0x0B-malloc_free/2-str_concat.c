#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - manuality is power
 * @s1: first half
 * @s2: second half
 * Return: first + second = string ^^
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0;

	char *pt;

	int a = strlen(s1), b = strlen(s2);

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	pt = (char *) malloc(a + b + 1);
	if (pt == NULL)
		return (NULL);
	for (i = 0; i <= a; i++)
	{
	pt[i] = s1[i];
	}
	for (i = a; i <= (a + b); i++)
	{
	pt[i] = s2[j];
		j++;
	}
	return (pt);
	free(pt);
}
