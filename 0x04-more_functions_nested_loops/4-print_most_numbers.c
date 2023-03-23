#include "main.h"
/**
 * print_most_numbers - its all about continue;
 * Return: i LOVE VOID
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		while ((i = 2) || (i = 4))
		{
			continue;
		}
	_putchar(i + '0');
	}
	_putchar('\n');
}
