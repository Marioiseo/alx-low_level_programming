#include <stdio.h>
/**
 * main - this is hard one to get -_-
 * Return: 0 i guess
 */
int main(void)
{
	int i;

	int a = 1;

	int b = 2;

	int c = a + b;

	printf("1, 2, 3, ");
	for (i = 3; i <= 50; i++)
	{
	a = b;
	b = c;
	c = a + b;
	printf("%d, ", c);
	}
return (0);
}
