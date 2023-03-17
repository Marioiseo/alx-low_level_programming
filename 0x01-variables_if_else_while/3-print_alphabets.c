#include <stdio.h>
/**
 *main -alphabets in chars both
 *Return: "0" success
*/
int main(void)
	{
	char c;

	char b;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
	}
