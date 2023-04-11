#include <stdlib.h>
#include "main.h"
/**
 * free_grid - lol thats just a joking task
 * @grid: the bytes to free
 * @height: the num of rows
 * Return: VOID
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
