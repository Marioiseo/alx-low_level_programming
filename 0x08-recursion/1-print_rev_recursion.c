#include "main.h"
/**
 * _print_rev_recursion -  first to say il recursion ^^
 * @s: the string to reverse
 * Return: Just void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
