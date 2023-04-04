#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_diagsums - to print the diag of 2D array sum
 * @a: the array i guess
 * @size: size of it for sure
 * Return:void void void
*/
void print_diagsums(int *a, int size)
{
	int d1, d2;

	int i;

	for (i = 0; i < size; i++)
	{
		d1 += a[i][i];
		d2 += a[size - i - 1][size - i - 1];
	}
	printf("%d", d1 + d2);
}
