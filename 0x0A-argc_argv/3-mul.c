#include <stdio.h>
/**
 * main - now we talking its a true task
 * @argc: you know it
 * @argv: lovely strings can be ints
 * Return: Multiplication of 2 ints
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
	return (argv[1] * argv[argc - 1]);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
