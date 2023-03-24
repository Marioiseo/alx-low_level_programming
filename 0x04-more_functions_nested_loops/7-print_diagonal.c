#include "main.h"
/**
 * print_diagonal - more shapes more fun
 * @n: nums of lines
 * Return: VOID is always VOID
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		for (i = 0; i < n; i++)
		{
		for (j = 0; j < i; j++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
		if (i == n)
			break;
	}
}
