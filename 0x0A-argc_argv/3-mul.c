#include <stdio.h>
#include <stdlib.h>
/**
 * main - now we talking its a true task
 * @argc: you know it
 * @argv: lovely strings can be ints
 * Return: Multiplication of 2 ints
 */
int main(int argc, char *argv[])
{
	int multi;

	if (argc == 3)
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", multi);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
