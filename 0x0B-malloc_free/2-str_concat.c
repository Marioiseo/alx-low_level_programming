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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	pt = (char *) malloc(strlen(s1) + strlen(s2) + 1);
	if (pt == NULL)
		return (0);
	for (i = 0; i <= (int) strlen(s1); i++)
	{
	pt[i] = s1[i];
	}
	for (i = strlen(s1); i <= (int)(strlen(s1) + strlen(s2)); i++)
	{
	pt[i] = s2[j];
		j++;
	}
	return (pt);
	free(pt);
}
