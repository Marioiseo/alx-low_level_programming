#include "main.h"
/**
 * set_string - adding a to b and b to a
 * @s: pointer to pointer
 * @to: the pointed one i guess
 * Return: void lovely void
*/
void set_sting(char **s, char *to)
{
	char *ptr;

	char *str;

	int i, j;

	while (*to != '\0')
	{
		*ptr = *to;
		to++;
	}
	while (**s != '\0')
	{
		*str = **s;
		s++;
	}
	*ptr += *str;
	*str += *ptr;
	**s = *str;
	*to = *ptr;
}
