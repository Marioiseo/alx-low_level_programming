#include <stdio.h>
/**
 * main - this is hard one to get -_-
 * Return: 0 i guess
 */
int main(void)
{
	int i;

	long int a = 1;

	long int b = 2;

	long int c = a + b;

	printf("1, 2, 3, ");
	for (i = 4; i <= 50; i++)
	{
	a = b;
	b = c;
	c = a + b;
	if (i == 50)
		printf("%ld", c);
	else
	printf("%ld, ", c);
	}
	printf("\n");
return (0);
}
