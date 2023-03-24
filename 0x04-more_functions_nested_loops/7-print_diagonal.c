#include "main.h"
/**
 * print_diagonal - more shapes more fun
 * @n: nums of lines
 * Return: VOID is always VOID
*/
void print_diagonal(int n)
{
	int i, j;

	while (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
		if (i == 1)
			_putchar('\\');
		}
		for (j = 1; j < i; j++)
		{
		_putchar(' ');
		_putchar('\\');
		}
		if (i == n)
			break;
	}
}
