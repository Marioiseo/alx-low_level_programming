#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - easy to manage hard to code thats why we use psuedocode
 * @n: pass me a numm please ! ^_^
 * Return: i guess its voooid
 */
void print_to_98(int n)
{
	int a, b;

	if (n != 98 && n < 98)
	{
	a = n;
	for (; a < 98; a++)
	{
		if ( a <= 9)
		{
	_putchar(a + '0');
	_putchar(',');
	_putchar(' ');
		}
		else if (a > 9)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar('.');
			_putchar(' ');
		}
	}
	}
	if (n != 98 && n > 98)
	{
	b = n;
	for (; b > 98; b--)
	{
	_putchar((b / 10)+ '0');
	_putchar((b % 10)+ '0');
	_putchar(',');
	_putchar(' ');
	}
	}
	else
	{
	_putchar((n / 10 ) + '0');
	_putchar((n % 10 ) + '0');
	}
}
