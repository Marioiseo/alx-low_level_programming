#include "main.h"
/**
 * _puts_recursion - my first recursion ^^
 * @s: the string ^_^
 * Return: VOID VOID lol
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_putchar('\n');
		_puts_recursion(s + 1);
	}
}
