#include "main.h"
/**
 * puts_half - pointers are funny not hard ^^
 * @str: please enter your string <3
 * Return: void isnt that empty you know lol.
*/
void puts_half(char *str)
{
	int a = 0;

	int f = 0;

	int l = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	f = (a / 2);
	for (l = f; l <= a; l++)
	{
		_putchar(str[l]);
	}
	if ((f % 2) != 0)
	{
		_putchar(str[l + 1]);
	}
	_putchar('\n');
}
