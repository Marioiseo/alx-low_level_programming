#include "main.h"
#include <stdio.h>
/**
 * print_array - seems to be rough
 * @a: enter your nums please
 * @n: how many nums are on count
 * Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i, ", a[i]);
	}
}
