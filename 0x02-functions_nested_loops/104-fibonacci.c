#include <stdio.h>
/**
 * main - this is hard one to get -_-
 * Return: 0 i guess
 */
int main(void)
{
	int i;

	unsigned long int a = 1;

	unsigned long int b = 2;

	unsigned long int c = a + b;

	printf("1, 2, 3, ");
	for (i = 4; i <= 98; i++)
	{
	a = b;
	b = c;
	c = a + b;
	if (i == 98)
		printf("%lu", c);
	else
	printf("%lu, ", c);
	}
	printf("\n");
return (0);
}
