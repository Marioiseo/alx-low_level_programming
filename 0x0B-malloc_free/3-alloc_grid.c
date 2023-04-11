#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - wish it has no garbage checker in it
 * @width: the width
 * @height: what ever
 * Return: 2D array with malloc
 */
int **alloc_grid(int width, int height)
{
	int **pt;

	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	pt = (int **) malloc(sizeof(int *) * height);

	if (pt == NULL)
	{
		free(pt);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pt[i] = (int *) malloc(sizeof(int) * width);
		if (pt[i] == NULL)
			free(pt[i]);
	}
	return (pt);
}
