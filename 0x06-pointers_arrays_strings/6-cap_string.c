#include "main.h"
/**
 * cap_string - for me its just the same ^^
 * @str: please enter your string <3
 * Return: string
*/
char *cap_string(char *str)
{
	char sep[] = " \t\n,;.!?\"(){}";

	int i;

	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		continue;
		for (j = 0; j < 13; j++)
		{
		if (str[i] == sep[j])
			++i;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		continue;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	return (str);
}
