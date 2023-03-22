#include "main.h"
#include <stdio.h>
/**
 * print_times_table - lovely rough task
 * @n: more than 0 less than 15
 * Return: n value lol
*/
void print_times_table(int n)
{
	int a, b;

	if (n >= 0 && n <= 15)
	for (a = 0; a <= n; a++)
	{
	for (b = 0; b <= n; b++)
	{
	if (b < n)
	printf("%d,   ", a * b);
	else
	printf("%i", a * b);
	}
	printf("\n");
	}
}

