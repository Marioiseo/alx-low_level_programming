#include "main.h"
/**
 * print_rev - reversed is desrever
 * @s: put your fav string please ^_^
 * Return: void is void babe
*/
void print_rev(char *s)
{
	char i = *s;

	int a;

	a = sizeof(*s);

	while (*s != '\0')
	{
	for ((i = a - 1); i >= s[0]; i--)
	{
	_putchar(i);
	}
	}
	_putchar('\n');
}
