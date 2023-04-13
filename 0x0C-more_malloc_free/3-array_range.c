#include <stdlib.h>
#include "main.h"
/**
 * array_range - more insanity
 * @min: the lowest value
 * @max: the highest value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *pt;
	int i;
	int a;

	if (min > max)
		return (NULL);
	a = max - min + 1;

	pt = malloc(a * sizeof(int));
	if (pt == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
	{
	pt[i] = min;
	min++;
	}
	return (pt);
}
