#include <stdio.h>
/**
 * main - i love this task LOL <3
 * Return: maybe void maybe 0 --cant be void-_-
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if ((i % 3) == 0)
		printf("Fizz ");
	else if ((i % 5) == 0)
		printf("Buzz ");
	else if (((i % 3) == 0) && ((i % 5) == 0))
		printf("FizzBuzz ");
	else
	printf("%i ", i);
	}
	printf("\n");
	return (0);
}
