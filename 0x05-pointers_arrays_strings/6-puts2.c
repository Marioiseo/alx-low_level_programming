#include "main.h"
/**
 * puts2 - thats easier than the past ones "i wish"
 * @str: string entry please ^_^
 * Return: void void void
*/
void puts2(char *str)
{
	int i = 0;
	
	int a;

	int b = 0;

	while (str[i] != '\0')
	{
	i++;
	}
	for (a = 1; a <= i; a++)
	{
		_putchar(str[b] + a)
			b++;
	}
	_putchar('\n');
} 
