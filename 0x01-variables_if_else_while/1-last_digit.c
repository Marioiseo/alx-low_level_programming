#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - last digit
 * Return: 0 *success*
*/
int main(void)
	{
	int n;

	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = abs(n % 10);
	if (x == 0)
	{
	printf("Last digit of %i is %u and is 0\n", n, x);
	}
	else if (x > 5)
	{	
	printf("Last digit of %i is %u and is greater than 5\n", n, x);
	}
	else  if (x != 0 || x < 6)
	{
	printf("Last digit of %i is %u and is less than 6 and not 0\n", n, x);
	}
	return (0);
	}
