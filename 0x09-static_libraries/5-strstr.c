#include "main.h"
/**
 * _strstr - seeking for substr in original one
 * @haystack: the original string
 * @needle: the funny string to look after
 * Return: the remaining string or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (needle[i] != '\0')
		i++;
	while (*haystack != '\0')
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack - i);
		}
		else
			haystack++;
	}
	return (NULL);
}
