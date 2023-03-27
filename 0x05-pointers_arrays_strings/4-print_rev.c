#include "main.h"
/**
 * print_rev - reversed is desrever
 * @s: put your fav string please ^_^
 * Return: void is void babe
*/
void print_rev(char *s)
{
	int a, b;

	char i;

	for (i = 0; *s[i] < '\0'; i++)
	{
	a += i;
	}
	for (b = a; b >= 0; b--)
	{
	_putchar(*s[b]);
	}
	_putchar('\n');
}
