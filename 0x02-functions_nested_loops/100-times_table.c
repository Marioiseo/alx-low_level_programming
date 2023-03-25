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
	{
	for (a = 0; a <= n; a++)
	{
	for (b = 0; b <= n; b++)
	{
	if (b == n)
		printf("%i", a * b);
	else if (b == 0)
		printf("%i", a * b);
	else if ((a * b) > 9)
	printf(",  %i", a * b);
	else if ((a * b) < 10)
	printf(",   %i", a * b);
	else if ((a * b) > 99)
		printf(", %i", a * b);
	}
	printf("\n");
	}
	}
}
