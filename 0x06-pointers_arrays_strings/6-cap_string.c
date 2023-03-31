#include "main.h"
/**
 * cap_string - for me its just the same ^^
 * @str: please enter your string <3
 * Return: string
*/
char *cap_string(char *str)
{
	int i;

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
