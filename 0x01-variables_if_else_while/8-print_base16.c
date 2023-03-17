#include <stdio.h>
/**
 * main - so close of base 16
 * Return: 0 ^_^
*/
int main(void)
	{
	int n;

	char k;

	for (n = 0; n <= 9; n++)
	putchar(n);
	for (k = 'a'; k <= 'f'; k++)
	putchar(k + '0');
	putchar('\n');
	return (0);
	}
