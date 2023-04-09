#include <stdio.h>
#include <stdlib.h>
/**
 * main - advanced for sure
 * @argc: 1 argument only
 * @argv: a number to break
 * Return: 1 nor 0
 */
int main(int argc, char *argv[])
{
	int a, b = 0;

	int change[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		int amount = atoi(argv[1]);
		for (a = 0; a < 5; a++)
		{
		if (amount >= change[a])
		{
			b += amount / change[a];
			amount = amount % change[a];
			if (amount % change[a] == 0)
			{
				break;
			}
		}
		}
		printf("%i\n", b);
	}
	else
	{
		printf("Error\n");
	return (1);
	}
	return (0);
}
