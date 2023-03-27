#include "main.h"
/**
 * puts2 - thats easier than the past ones "i wish"
 * @str: string entry please ^_^
 * Return: void void void
*/
void puts2(char *str)
{
	char i;
	
	int a = 1;

	for (i = str; i < '\0'; i++)
	{
	_putchar(str[i + a]);
	a++
	}
	_putchar('\n');
} 
