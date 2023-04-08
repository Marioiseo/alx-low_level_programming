#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sum the arguments
 * @argc: count of arguments
 * @argv: value of arguments
 * Return:0 or 1
 */
int main(int argc, char *argv[])
{
	int i;

	int sum = 0;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) <= 0)
		{
		printf("Error\n");
		return (1);
		}
		else
	sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	}
	else
	{
	printf("0\n");
	}
	return (0);
}
