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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10 ) == 0)
	{
	printf("Last digit of %i is %u and is 0\n", n, n %10);
	}
	else if ((n % 10) > 5)
	{
	printf("Last digit of %i is %u and is greater than 5\n", n, n % 10);
	}
	else  if ((n % 10) != 0 || (n % 10) < 6)
	{
	printf("Last digit of %i is %u and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
	}