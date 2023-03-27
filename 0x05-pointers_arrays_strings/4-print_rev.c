#include "main.h"
/**
 * print_rev - reversed is desrever
 * @s: put your fav string please ^_^
 * Return: void is void babe
*/
void print_rev(char *s)
{
	char i = *s;

	for (i = '\0';i >= s[0]; i--)
	{
		if (i == '\0')
			continue;
		else
	_putchar(i);
	}
	_putchar('\n');
}
