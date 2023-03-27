#include "main.h"
/**
 * puts2 - thats easier than the past ones "i wish"
 * @str: string entry please ^_^
 * Return: void void void
*/
void puts2(char *str)
{
	int i = 0;

	int a, c;

	int b = 0;

	while (str[i] != '\0')
	{
	i++;
	}
	c = (i / 2);
	for (a = 0; a < c; a++)
	{
	b = a;
	_putchar(str[b + a]);
	}
	if (i > 100)
	{
		_putchar('.');
	}
	_putchar('\n');
}
