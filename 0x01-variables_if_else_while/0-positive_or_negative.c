#include <stdio.h>
#include <time.h>
/**
 * main - positive or negative or zero
 * Return: 0 * success *
*/
int main(void)
	{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if(n > 0 )
	{
	printf("is positive\n");
	}
	else if (n < 0 )
	{
	printf("is negative\n");
	}
	else
	{
	printf("is zero\n");
	}
	return (0);
	}
