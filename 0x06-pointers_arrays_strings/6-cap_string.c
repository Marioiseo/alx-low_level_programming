#include "main.h"
/**
 * cap_string - for me its just the same ^^
 * @str: please enter your string <3
 * Return: string
*/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			continue;
		}
		if (str[i] == ' ' || str[i] == '\n' || str[i] == ',' || str[i] == '	')
			++i;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			continue;
		}
		if (str[i] == '.' || str[i] == '?' || str[i] == '!' || str[i] == '"')
			++i;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			continue;
		}
		if (str[i] == '{' || str[i] == '}' || str[i] == '(' || str[i] == ')')
			++i;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			continue;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			continue;
		}
	}
	return (str);
}
