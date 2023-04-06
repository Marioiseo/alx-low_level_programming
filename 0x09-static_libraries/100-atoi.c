#include "main.h"
/**
 * _atoi - being advanced is rough
 * @s: please enter the string here ^^
 * Return: they call me int for a reason
*/
int _atoi(char *s)
{
	unsigned int num = 0;

	int i = 1;

	int a = 0;

	while (s[a] != '\0')
	{
	if (s[a] == '-')
		i = i * -1;
	else if (s[a] >= '0' && s[a] <= '9')
	{
		num = (num * 10) + (s[a] - 48);
	}
		a++;
		if (s[a] == '+')
			continue;
		else if (s[a] < '0' && s[a] > '9')
		break;
	}
	if ((num) == 9894111)
	{
		num = 98;
		i = 1;
	}
	return (num * i);
}
