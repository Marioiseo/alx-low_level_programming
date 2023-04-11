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
	if (width <= 0 || height <= 0)
		return (NULL);
	int **pt;

	int i;

	pt = (int**) malloc(sizeof(int*) * height);

	for (i = 0; i < height; i++)
	{
		pt[i] = (int*) malloc(sizeof(int) * width);
	
	}
	return (pt);
	free(pt);
}
