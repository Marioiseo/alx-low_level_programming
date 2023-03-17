#include <stdio.h>
/**
 * main - 3 more combinations to go
 * Return: 0 As always
*/
int main(void)
	{
	int a = 0;

	int b = 1;

	int c;

	for (c = 2; c <= 9; c++)
	{
	if (a == b || a == c || b == c )
	{
		continue;
	}
	putchar(a + '0');
	putchar(b + '0');
	putchar(c + '0');
	if (a == 7)
	continue;
	putchar(',');
	putchar(' ');
	if (c == 9)
	{
	b++;
	c = (b);
	}
	if (b == 9)
	{
	a++;
	b = (a);
	c = (b);
	}
	}
	putchar('\n');
	return (0);
	}
