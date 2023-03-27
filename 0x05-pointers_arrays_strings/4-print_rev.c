#include "main.h"
/**
 * print_rev - reversed is desrever
 * @s: put your fav string please ^_^
 * Return: void is void babe
*/
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
	c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
