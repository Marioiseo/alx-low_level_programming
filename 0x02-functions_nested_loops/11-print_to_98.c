#include "main.h"
/**
 * print_to_98 - easy to manage hard to code thats why we use psuedocode
 * @n: pass me a numm please ! ^_^
 * Return: i guess its voooid
 */
void print_to_98(int n)
{
	int a, b;

	while (n != 98)
	{
		for (a = n; a <= 98; a++)
		{
			_putchar(a + '0');
			_putchar(',');
			_putchar(' ');
		}
	for (b = n; b > 98; b--)
	{
		_putchar(b + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	}
}
