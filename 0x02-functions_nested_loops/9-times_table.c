#include "main.h"
/**
 * times_table - all we have here is voooid !
 * Return: void only returns void
*/
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
	_putchar(48);
	for (b = 1; b <= 9; b++)
	{
	c = (a * b);
	if (b <= 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	if (c <= 9)
	{
	_putchar(' ');
	_putchar(c + '0');
	}
	if (c > 9)
	{
	_putchar((c / 10) + '0');
	_putchar((c % 10) + '0');
	}
	}
	_putchar('\n');
	}
}
