#include <stdio.h>
/**
 * main - thats a lovely task to add the result to variable
 * Return: void
 */
void main(void)
{
	int i;

	int result = 0;

	for (i = 0; i <= 1024; i++)
	{
		if((i % 3) == 0)
			result += i;
		else if ((i % 5) == 0)
			result += i;
	}
	printf("%d\n", result);
}
