#include "main.h"
/**
 * string_toupper - to upper case i guess we've done it before
 * @str: the string isnt called lol
 * Return: char it is
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - 32;
	}
	i++;
	}
	return (str);
}
