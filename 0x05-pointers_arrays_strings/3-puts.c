#include "main.h"
/**
 * _puts - the worry of the stdout part is true
 * @str: the string
 * Return: vooid and more void
*/
void _puts(char *str)
{
	char i;

	while (*str != '\0')
	{
		i = str;
		_putchar(i);
		str++;
	}
}
