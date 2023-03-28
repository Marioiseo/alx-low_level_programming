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

	while (n <= 0)
	{
		printf("\n");
		break;
	}

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		printf("%i, ", a[i]);
		else if (i == (n - 1))
		printf("%i", a[i]);
	}
	printf("\n");
}
