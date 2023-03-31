#include "main.h"
/**
 * string_toupper - to upper case i guess we've done it before
 * @str: the string isnt called lol
 * Return: char it is
*/
char *string_toupper(char *str)
{
	int i = 0;

	char c;

	while (str[i] != '\0')
	{
	c = str[i];
	c = c - 32;
	str[i] = c;
	}
	return (str);
}
