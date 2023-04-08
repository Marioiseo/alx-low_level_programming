#include <stdio.h>
/** 
 * main - loving this project lol
 * @argc: how many arguments can you provide ^^
 * @argv: lets see you input all strings you can
 * Return: 0 or more zeros
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%i\n", argv[i]);
	}
}
