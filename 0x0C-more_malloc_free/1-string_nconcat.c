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
	unsigned int a = 0, b = 0;

	while (s1[a])
		a++;
	if (a == 0 && b == 0)
		return (NULL);
	for (i = 0; i < a; i++)
	{
		pt = malloc(a + n + 1);

		if (pt == NULL)
			return (NULL);
		pt[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		if (s2[j] != '\0')
		pt[i] = s2[j];
		i++;
	}
	return (pt);
	free(pt);
}
	
