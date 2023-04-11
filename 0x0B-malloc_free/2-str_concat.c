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

	if (a == 0 && b == 0)
	{
		s1 = "";
		s2 = "";
	}
	if (a == 0)
	s1 = "";
	if (b == 0)
	s2 = "";
	pt = (char *) malloc(a + b + 1);
	if (pt == NULL)
		return (NULL);
	if (pt != NULL)
	{
	for (i = 0; i <= a; i++)
	{
	pt[i] = s1[i];
	}
	for (i = a; i <= (a + b); i++)
	{
	pt[i] = s2[j];
		j++;
	}
	}
	pt[i] = '\0';
	return (pt);
	free(pt);
}
