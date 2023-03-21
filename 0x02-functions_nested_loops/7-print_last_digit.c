#include "main.h"
/**
 * print_last_digit - name is specific
 * @c: checker
 * Return: maybe 1 maybe 0
*/
int print_last_digit(int c)
{
	int b;

	b = (c % 10);
	if (b < 0)
	{
	b = (b * -1);
	}
	_putchar(b * '0');
	_putchar('\n');
	return (b);
}
