#include "main.h"
/**
 * _atoi - being advanced is rough
 * @s: please enter the string here ^^
 * Return: they call me int for a reason
*/
int _atoi(char *s)
{
	unsigned int num;

	int i = 1;

	int a = 0;

	while (s[a] != '\0')
	{
	if (s[a] == '-')
		i = i * -1;
	else if (s[a] >= '0' && s[a] >= '9')
		num = (num * 10) + (s[a] - 48);
	else 
		break;
	a++;
	return (num * i);
	}
}
