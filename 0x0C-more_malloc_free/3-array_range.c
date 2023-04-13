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
	int a = min;

	if (min > max)
		return (NULL);
	while (min <= max)
	{
		min++;
	}
	pt = malloc(min * sizeof(int));
	if (pt == NULL)
		return (NULL);

	for (i = 0; i < min; i++)
	{
	pt = a;
	a++;
	}
	return (pt);
}
