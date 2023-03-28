#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random passwords are easy to copy lol
 * Return: random password as i said are int for usre
*/
int main(void)
{
	int i;

	char c;

	char nums[] = "1, 2, 3, 4, 5, 6, 7, 8, 9, 0";

	char b[] = "@, #, $, %, ^, &, *, (, ), _, !.";

	srand(time(NULL));
	for (i = 0; i <= 12; i++)
	{
		printf("%c", nums[rand()] % 10);
		printf("%c", b[rand()] % 10);
		printf("%c", c[rand()] % 10);
	}
	return (0);
}
