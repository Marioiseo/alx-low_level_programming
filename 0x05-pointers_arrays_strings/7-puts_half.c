#include "main.h"
/**
 * puts_half - pointers are funny not hard ^^
 * @str: please enter your string <3
 * Return: void isnt that empty you know lol.
*/
void puts_half(char *str)
{
	int a = 0;

	int fmiddle, lmiddle;

	while (*str != '\0')
	{
		a++;
	}
	fmiddle = a / 2;
	for (lmiddle = fmiddle; lmiddle <= a; lmiddle++)
	{
		_putchar(str[lmiddle]);
	}
	if ((lmiddle % 2) != 0)
{
	lmiddle = lmiddle + 1;
		_putchar(str[lmiddle]);
}
	_putchar('\n');
}

