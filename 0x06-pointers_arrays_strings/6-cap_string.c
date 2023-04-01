#include "main.h"
/**
 * cap_string - for me its just the same ^^
 * @str: please enter your string <3
 * Return: string
*/
char *cap_string(char *str)
{
	char sep[14] = " \t\n,;.!?\"(){}";

	int i;

	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		for (j = 0; j < 14; j++)
		{
		if (str[i] == sep[j])
			++i;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
