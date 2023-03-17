#include <stdio.h>
/**
 * main - so close of base 16
 * Return: 0 ^_^
*/
int main(void)
	{
	int n = 0;

	char k = 'a';

	while ( n <= 9)
	{
	putchar(n + '0');
	n++;
	}
	while (k <= 'f')
	{
	putchar(k);
	k++;
	}
	putchar('\n');
	return (0);
	}
