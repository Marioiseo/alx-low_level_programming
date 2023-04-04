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
	int d1 = 0, d2 = 0;

	int i, j = 0;

	for (i = 0; i < size * size; i++)
	{
		d1 = d1 + a[i];
		d2 = d2 + a[size - i - 1];
	}
	printf("%d", d1 + d2);
}
