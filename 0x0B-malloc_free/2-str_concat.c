#include <stdlib.h>
#include "main.h"
/**
 * str_concat - manuality is power
 * @s1: first half
 * @s2: second half
 * Return: first + second = string ^^
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, d = 0;

	int i, c;

	char *pt;

	while (s1[a])
	a++;
	while (s2[b])
	b++;
	c = a + b;
	if (*s1 == '\0')
		return (s2);
	if (*s2 == '\0')
		return (s1);
	pt = (char *) malloc(c + 1);
	if (pt != NULL)
	{
	for (i = 0; i <= a; i++)
	{
	pt[i] = s1[i];
	}
	for (i = a; i <= c; i++)
	{
	pt[i] = s2[d];
		d++;
	}
	return (pt);
	free(pt);
	}
	else
		return (NULL);
}