#include "main.h"
/**
 * _strstr - seeking for substr in original one
 * @haystack: the original string
 * @needle: the funny string to look after
 * Return: the remaining string or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	int a = 0, b = 0;

	while (haystack[a] != '\0')
		a++;
	while (needle[b] != '\0')
		b++;
	for (i = 0; haystack[i] <= a; i++)
	{
		for (j = 0; needle[j] <= b; j++)
		{
			if (haystack[i] != needle[j])
				break;
			else if (haystack[i] == needle[j])
			while (haystack[i + j] == needle[j])
			{
				j++;
				if (needle[j] < b)
				continue;
				return (haystack);
			}
		}
	}
		return (NULL);
}
